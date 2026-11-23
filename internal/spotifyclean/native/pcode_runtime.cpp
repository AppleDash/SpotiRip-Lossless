#include "pcode_runtime.h"
#include "nested_vm.h"

#include <algorithm>
#include <cerrno>
#include <cmath>
#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sys/mman.h>
#include <unordered_map>
#include <utility>
#include <vector>

using u128 = unsigned __int128;
using s128 = __int128;

namespace {

constexpr uint64_t kImageHeap = 0x40000000ULL;
constexpr uint64_t kHeapSize = 0x1000000ULL;
constexpr uint64_t kStack = 0x80000000ULL;
constexpr uint64_t kStub = 0x50000000ULL;
constexpr uint64_t kStop = 0x50100000ULL;
constexpr uint64_t kHandler = 0x16262c0ULL;
constexpr uint64_t kResult = 0x162705aULL;
constexpr uint64_t kCipherInit = 0x251bde0ULL;
constexpr uint64_t kPage = 4096;
constexpr uint64_t kInstructionLimit = 200000000ULL;
constexpr uint8_t entropy[] = {
    0xb5, 0x6b, 0x01, 0xb4, 0xc0, 0x6c, 0x97, 0xbc,
    0x6b, 0xc4, 0x31, 0x82, 0x72, 0xd3, 0xdc, 0x16,
    0x5a, 0xde, 0x5b, 0xad, 0x93, 0x8c, 0x19, 0x68,
};

struct Import {
    uint64_t address;
    const char *name;
};

const Import imports[] = {
#include "imports.inc"
};

enum Space : uint8_t { none, constant, ram, reg, unique };
enum Opcode : uint8_t {
    copy, load, store, branch, cbranch, branchind, call, callind, ret,
    intEqual, intNotEqual, intLess, intSLess, intAdd, intSub, intMult,
    intDiv, intSDiv, intRem, intSRem, intAnd, intOr, intXor,
    intLeft, intRight, intSRight, intCarry, intSCarry, intSBorrow,
    intZext, intSext, intNegate, int2Comp, boolNegate, boolAnd, boolOr,
    boolXor, popcount, subpiece, floatMult, floatTrunc, callother,
    int2Float, floatDiv, floatEqual, floatLess, floatNan,
};

struct Varnode {
    Space space;
    uint8_t size;
    uint64_t offset;
};

struct Operation {
    Opcode opcode;
    Varnode output;
    Varnode inputs[3];
};

struct Instruction {
    uint64_t address;
    uint16_t size;
    std::vector<Operation> operations;
};

struct Range {
    uint64_t start;
    uint64_t end;
};

class Reader {
public:
    Reader(const uint8_t *data, size_t size) : data_(data), size_(size) {}
    template<typename T> bool get(T &value) {
        if (position_ + sizeof(T) > size_) return false;
        std::memcpy(&value, data_ + position_, sizeof(T));
        position_ += sizeof(T);
        return true;
    }
    bool bytes(void *output, size_t size) {
        if (position_ + size > size_) return false;
        std::memcpy(output, data_ + position_, size);
        position_ += size;
        return true;
    }
    bool skip(size_t size) {
        if (position_ + size > size_) return false;
        position_ += size;
        return true;
    }
    size_t position() const { return position_; }
    size_t size() const { return size_; }
private:
    const uint8_t *data_;
    size_t size_;
    size_t position_ = 0;
};

u128 mask(uint8_t size) {
    return size >= 16 ? ~static_cast<u128>(0) : (static_cast<u128>(1) << (size * 8)) - 1;
}

s128 signedValue(u128 value, uint8_t size) {
    if (size < 16 && (value & (static_cast<u128>(1) << (size * 8 - 1)))) value |= ~mask(size);
    return static_cast<s128>(value);
}

uint64_t low(u128 value) { return static_cast<uint64_t>(value); }

double asDouble(u128 value, uint8_t size) {
    if (size == 8) {
        uint64_t bits = low(value);
        double result;
        std::memcpy(&result, &bits, 8);
        return result;
    }
    uint32_t bits = static_cast<uint32_t>(low(value));
    float result;
    std::memcpy(&result, &bits, 4);
    return result;
}

u128 floatingBits(double value, uint8_t size) {
    if (size == 8) {
        uint64_t bits;
        std::memcpy(&bits, &value, 8);
        return bits;
    }
    float converted = static_cast<float>(value);
    uint32_t bits;
    std::memcpy(&bits, &converted, 4);
    return bits;
}

} // namespace

struct clean_runtime {
    uint64_t base = 0;
    uint64_t fsbase = 0;
    uint64_t heap = 0;
    uint64_t heapBase = 0;
    uint64_t cipher = 0;
    uint64_t pc = 0;
    size_t entropyOffset = 0;
    bool failed = false;
    std::string error;
    uint8_t registers[0x1400]{};
    uint8_t temporaries[0x34c000]{};
    std::vector<Instruction> instructions;
    std::unordered_map<uint64_t, size_t> addresses;
    std::vector<Range> ranges;
    std::vector<uint8_t> entropyOverride;
    uint64_t history[32]{};
    size_t historyCount = 0;

    bool fail(const char *format, ...) {
        if (!failed) {
            char buffer[768];
            va_list arguments;
            va_start(arguments, format);
            std::vsnprintf(buffer, sizeof(buffer), format, arguments);
            va_end(arguments);
            error = buffer;
        }
        failed = true;
        return false;
    }

    bool map(uint64_t address, size_t size) {
        void *result = mmap(reinterpret_cast<void *>(address), size, PROT_READ | PROT_WRITE,
                            MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED_NOREPLACE, -1, 0);
        if (result == MAP_FAILED) return fail("memory mapping at %#llx: %s", address, std::strerror(errno));
        ranges.push_back({address, address + size});
        return true;
    }

    bool mapHeap(uint64_t imageCursor) {
        void *result = mmap(nullptr, kHeapSize, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
        if (result == MAP_FAILED) return fail("memory mapping heap: %s", std::strerror(errno));
        heapBase = reinterpret_cast<uintptr_t>(result);
        heap = heapBase + (imageCursor - kImageHeap);
        ranges.push_back({heapBase, heapBase + kHeapSize});
        return true;
    }

    bool loadMemory(const void *data, size_t size) {
        Reader reader(static_cast<const uint8_t *>(data), size);
        char magic[6];
        uint32_t count;
        if (!reader.bytes(magic, sizeof(magic)) || std::memcmp(magic, "SPMEM1", 6) != 0 ||
            !reader.get(base) || !reader.get(fsbase) || !reader.get(heap) || !reader.get(count)) {
            return fail("invalid memory image");
        }
        const uint64_t imageCursor = heap;
        if (imageCursor < kImageHeap || imageCursor > kImageHeap + kHeapSize) return fail("invalid heap in memory image");
        ranges.reserve(32);
        for (uint32_t index = 0; index < count;) {
            Reader contents = reader;
            uint64_t rangeStart = 0;
            uint64_t rangeEnd = 0;
            for (; index < count; index++) {
                Reader next = reader;
                uint64_t address;
                uint32_t length;
                if (!next.get(address) || !next.get(length) || length != kPage || !next.skip(length)) {
                    return fail("truncated memory image");
                }
                if (rangeEnd && address != rangeEnd) break;
                if (!rangeEnd) rangeStart = address;
                rangeEnd = address + length;
                reader = next;
            }
            const bool imageHeap = rangeStart >= kImageHeap && rangeEnd <= kImageHeap + kHeapSize;
            uint64_t outputStart = rangeStart;
            if (imageHeap) {
                if (!heapBase && !mapHeap(imageCursor)) return false;
                outputStart = heapBase + (rangeStart - kImageHeap);
            } else if (!map(rangeStart, rangeEnd - rangeStart)) {
                return false;
            }
            for (uint64_t address = rangeStart; address < rangeEnd; address += kPage) {
                uint64_t storedAddress;
                uint32_t length;
                const uint64_t outputAddress = imageHeap ? outputStart + (address - rangeStart) : address;
                if (!contents.get(storedAddress) || !contents.get(length) || storedAddress != address ||
                    !contents.bytes(reinterpret_cast<void *>(outputAddress), length)) return fail("invalid memory image");
            }
        }
        if (reader.position() != reader.size()) return fail("unexpected bytes in memory image");
        if (!heapBase) return fail("memory image has no heap");
        for (const Range &range : ranges) {
            for (uint64_t address = range.start; address + sizeof(uint64_t) <= range.end; address += sizeof(uint64_t)) {
                uint64_t value;
                std::memcpy(&value, reinterpret_cast<const void *>(address), sizeof(value));
                if (value < kImageHeap || value >= kImageHeap + kHeapSize) continue;
                value = heapBase + (value - kImageHeap);
                std::memcpy(reinterpret_cast<void *>(address), &value, sizeof(value));
            }
        }
        return true;
    }

    bool contains(uint64_t address, size_t size) const {
        if (address + size < address) return false;
        for (const Range &range : ranges) {
            if (address >= range.start && address + size <= range.end) return true;
        }
        return false;
    }

    bool read(uint64_t address, void *output, size_t size) {
        if (!size) return true;
        if (!contains(address, size)) return fail("invalid memory access at %#llx (%zu bytes), PC=%#llx", address, size, pc);
        std::memcpy(output, reinterpret_cast<const void *>(address), size);
        return true;
    }

    bool write(uint64_t address, const void *data, size_t size) {
        if (!size) return true;
        if (!contains(address, size)) return fail("invalid memory access at %#llx (%zu bytes), PC=%#llx", address, size, pc);
        std::memcpy(reinterpret_cast<void *>(address), data, size);
        return true;
    }

    template<typename T> bool readNumber(uint64_t address, T &value) { return read(address, &value, sizeof(value)); }
    template<typename T> bool writeNumber(uint64_t address, T value) { return write(address, &value, sizeof(value)); }

    bool loadProgram(const void *data, size_t size) {
        Reader reader(static_cast<const uint8_t *>(data), size);
        char magic[5];
        uint32_t instructionCount, operationCount;
        if (!reader.bytes(magic, sizeof(magic)) || std::memcmp(magic, "SPCP1", 5) != 0 ||
            !reader.get(instructionCount) || !reader.get(operationCount) || instructionCount > 1000000) {
            return fail("invalid operation program");
        }
        instructions.reserve(instructionCount);
        for (uint32_t index = 0; index < instructionCount; index++) {
            Instruction instruction{};
            uint8_t instructionSize;
            uint16_t operations = 0, reserved = 0;
            if (!reader.get(instruction.address) || !reader.get(instructionSize) ||
                !reader.get(operations) || !reader.get(reserved) || reserved != 0) return fail("invalid instruction header at %u, offset %#zx, reserved=%u", index, reader.position(), reserved);
            instruction.size = instructionSize;
            instruction.operations.reserve(operations);
            for (uint16_t op = 0; op < operations; op++) {
                uint8_t opcode, inputs;
                Operation operation{};
                if (!reader.get(opcode) || !reader.get(inputs) || opcode > floatNan || inputs > 3) return fail("invalid operation");
                operation.opcode = static_cast<Opcode>(opcode);
                Varnode *nodes[] = {&operation.output, &operation.inputs[0], &operation.inputs[1], &operation.inputs[2]};
                for (size_t node = 0; node <= inputs; node++) {
                    uint8_t space;
                    if (!reader.get(space) || !reader.get(nodes[node]->size) || !reader.get(nodes[node]->offset) ||
                        space > unique || nodes[node]->size > 16) return fail("invalid operand");
                    nodes[node]->space = static_cast<Space>(space);
                }
                instruction.operations.push_back(operation);
            }
            if (!addresses.emplace(instruction.address, instructions.size()).second) return fail("duplicate instruction address");
            instructions.push_back(std::move(instruction));
        }
        if (reader.position() != reader.size()) return fail("unexpected bytes in operation program");
        return true;
    }

    u128 get(const Varnode &node) {
        u128 value = 0;
        switch (node.space) {
        case none: break;
        case constant: value = node.offset; break;
        case ram: read(node.offset, &value, node.size); break;
        case reg:
            if (node.offset + node.size > sizeof(registers)) fail("register outside state");
            else std::memcpy(&value, registers + node.offset, node.size);
            break;
        case unique:
            if (node.offset + node.size > sizeof(temporaries)) fail("temporary value outside state");
            else std::memcpy(&value, temporaries + node.offset, node.size);
            break;
        }
        return value & mask(node.size);
    }

    void put(const Varnode &node, u128 value) {
        value &= mask(node.size);
        switch (node.space) {
        case none: break;
        case ram: write(node.offset, &value, node.size); break;
        case reg:
            if (node.offset + node.size > sizeof(registers)) fail("register outside state");
            else std::memcpy(registers + node.offset, &value, node.size);
            break;
        case unique:
            if (node.offset + node.size > sizeof(temporaries)) fail("temporary value outside state");
            else std::memcpy(temporaries + node.offset, &value, node.size);
            break;
        case constant: fail("write to constant"); break;
        }
    }

    uint64_t reg64(uint64_t offset) const {
        uint64_t value;
        std::memcpy(&value, registers + offset, sizeof(value));
        return value;
    }

    void setReg64(uint64_t offset, uint64_t value) { std::memcpy(registers + offset, &value, sizeof(value)); }
    uint64_t allocate(uint64_t size) {
        heap = (heap + 15) & ~15ULL;
        uint64_t result = heap;
        heap += size ? size : 1;
        if (heap > heapBase + kHeapSize) {
            fail("heap exhausted");
            return 0;
        }
        return result;
    }

    bool returnExternal(uint64_t value) {
        uint64_t stack = reg64(0x20), destination;
        if (!readNumber(stack, destination)) return false;
        setReg64(0, value);
        setReg64(0x20, stack + 8);
        pc = destination;
        return true;
    }

    const char *external(uint64_t address) const {
        if (address < kStub || address >= kStop) return nullptr;
        size_t left = 0, right = sizeof(imports) / sizeof(imports[0]);
        while (left < right) {
            size_t middle = left + (right - left) / 2;
            if (imports[middle].address < address) left = middle + 1;
            else right = middle;
        }
        if (left >= sizeof(imports) / sizeof(imports[0]) || imports[left].address != address) return nullptr;
        return imports[left].name;
    }

    bool runExternal() {
        const char *name = external(pc);
        if (!name) return fail("unknown external call at %#llx", pc);
        uint64_t first = reg64(0x38), second = reg64(0x30), third = reg64(0x10);
        if (!std::strcmp(name, "memcpy") || !std::strcmp(name, "memmove")) {
            std::vector<uint8_t> data(third);
            return read(second, data.data(), data.size()) && write(first, data.data(), data.size()) && returnExternal(first);
        }
        if (!std::strcmp(name, "memset")) {
            std::vector<uint8_t> data(third, static_cast<uint8_t>(second));
            return write(first, data.data(), data.size()) && returnExternal(first);
        }
        if (!std::strcmp(name, "malloc") || !std::strcmp(name, "realloc")) return returnExternal(allocate(first));
        if (!std::strcmp(name, "aligned_alloc")) return returnExternal(allocate(second));
        if (!std::strcmp(name, "calloc")) return returnExternal(allocate(first * second));
        if (!std::strcmp(name, "read")) {
            std::vector<uint8_t> data(third);
            const uint8_t *source = entropyOverride.empty() ? entropy : entropyOverride.data();
            size_t sourceSize = entropyOverride.empty() ? sizeof(entropy) : entropyOverride.size();
            for (size_t index = 0; index < data.size(); index++) data[index] = source[(entropyOffset + index) % sourceSize];
            entropyOffset = (entropyOffset + third) % sourceSize;
            return write(second, data.data(), data.size()) && returnExternal(third);
        }
        if (!std::strcmp(name, "__errno_location")) return returnExternal(fsbase + 0x800);
        if (!std::strcmp(name, "strerror_r")) return returnExternal(second);
        if (!std::strcmp(name, "fwrite")) return returnExternal(third);
        if (!std::strcmp(name, "strlen") || !std::strcmp(name, "strnlen")) {
            uint64_t length = 0;
            uint8_t byte;
            do {
                if (!read(first + length, &byte, 1)) return false;
                length++;
            } while (byte);
            return returnExternal(length - 1);
        }
        if (!std::strcmp(name, "__stack_chk_fail") || !std::strcmp(name, "__assert_fail") || !std::strcmp(name, "abort")) {
            return fail("fatal external call: %s", name);
        }
        if (!std::strcmp(name, "open")) return returnExternal(3);
        return returnExternal(0);
    }

    bool runNested() {
        uint64_t variant = pc - base;
        if (variant != 0x164e310 && variant != 0x164e400 && variant != 0x25ad720 && variant != 0x25ad810) return false;
        uint64_t source = reg64(0x38), length = reg64(0x30), state = reg64(0x10);
        if (nested_run_state(variant, reinterpret_cast<const uint8_t *>(source), length, reinterpret_cast<uintptr_t *>(state)) != 0) {
            fail("could not execute nested VM %#llx", variant);
            return true;
        }
        uint64_t destination = 0;
        uint64_t stack = reg64(0x20);
        if (!readNumber(stack, destination)) return true;
        setReg64(0x20, stack + 8);
        pc = destination;
        return true;
    }

    bool execute(const Instruction &instruction) {
        uint64_t next = pc + instruction.size;
        for (size_t index = 0; index < instruction.operations.size() && !failed; index++) {
            const Operation &operation = instruction.operations[index];
            const Varnode *in = operation.inputs;
            bool directControl = (operation.opcode == branch || operation.opcode == cbranch || operation.opcode == call) && in[0].space == ram;
            u128 a = directControl ? in[0].offset : get(in[0]);
            u128 b = get(in[1]);
            u128 result = 0;
            uint8_t size = operation.output.size;
            switch (operation.opcode) {
            case copy: result = a; break;
            case load: result = 0; read(low(b), &result, size); break;
            case store: {
                u128 value = get(in[2]);
                write(low(b), &value, in[2].size);
                break;
            }
            case branch:
            case branchind:
                if (in[0].space == constant) index = static_cast<size_t>(static_cast<int64_t>(index) + static_cast<int64_t>(in[0].offset)) - 1;
                else {
                    next = low(a);
                    index = instruction.operations.size();
                }
                break;
            case cbranch:
                if (b) {
                    if (in[0].space == constant) index = static_cast<size_t>(static_cast<int64_t>(index) + static_cast<int64_t>(in[0].offset)) - 1;
                    else {
                        next = low(a);
                        index = instruction.operations.size();
                    }
                }
                break;
            case call:
            case callind:
                next = low(a);
                index = instruction.operations.size();
                break;
            case ret:
                next = low(a);
                index = instruction.operations.size();
                break;
            case intEqual: result = a == b; break;
            case intNotEqual: result = a != b; break;
            case intLess: result = a < b; break;
            case intSLess: result = signedValue(a, in[0].size) < signedValue(b, in[1].size); break;
            case intAdd: result = a + b; break;
            case intSub: result = a - b; break;
            case intMult: result = a * b; break;
            case intDiv:
                if (!b) fail("division by zero");
                else result = a / b;
                break;
            case intSDiv: {
                s128 left = signedValue(a, in[0].size), right = signedValue(b, in[1].size);
                if (!right) fail("Vorzeichen-division by zero");
                else if (left == static_cast<s128>(static_cast<u128>(1) << 127) && right == -1) result = static_cast<u128>(left);
                else result = static_cast<u128>(left / right);
                break;
            }
            case intRem:
                if (!b) fail("remainder division by zero");
                else result = a % b;
                break;
            case intSRem: {
                s128 left = signedValue(a, in[0].size), right = signedValue(b, in[1].size);
                if (!right) fail("Vorzeichen-remainder division by zero");
                else if (left == static_cast<s128>(static_cast<u128>(1) << 127) && right == -1) result = 0;
                else result = static_cast<u128>(left % right);
                break;
            }
            case intAnd: result = a & b; break;
            case intOr: result = a | b; break;
            case intXor: result = a ^ b; break;
            case intLeft: result = b >= in[0].size * 8 ? 0 : a << low(b); break;
            case intRight: result = b >= in[0].size * 8 ? 0 : a >> low(b); break;
            case intSRight: result = b >= in[0].size * 8 ? (signedValue(a, in[0].size) < 0 ? mask(size) : 0) : static_cast<u128>(signedValue(a, in[0].size) >> low(b)); break;
            case intCarry: result = a > mask(in[0].size) - b; break;
            case intSCarry: {
                u128 value = (a + b) & mask(in[0].size), sign = static_cast<u128>(1) << (in[0].size * 8 - 1);
                result = ((a ^ value) & (b ^ value) & sign) != 0;
                break;
            }
            case intSBorrow: {
                u128 value = (a - b) & mask(in[0].size), sign = static_cast<u128>(1) << (in[0].size * 8 - 1);
                result = ((a ^ b) & (a ^ value) & sign) != 0;
                break;
            }
            case intZext: result = a; break;
            case intSext: result = static_cast<u128>(signedValue(a, in[0].size)); break;
            case intNegate: result = ~a; break;
            case int2Comp: result = -a; break;
            case boolNegate: result = !a; break;
            case boolAnd: result = a && b; break;
            case boolOr: result = a || b; break;
            case boolXor: result = static_cast<bool>(a) != static_cast<bool>(b); break;
            case popcount: {
                uint64_t high = static_cast<uint64_t>(a >> 64), lowValue = low(a);
                result = __builtin_popcountll(high) + __builtin_popcountll(lowValue);
                break;
            }
            case subpiece: result = a >> low(b * 8); break;
            case floatMult: {
                if (in[0].size != 8 || in[1].size != 8 || size != 8) fail("unsupported floating-point width");
                else {
                    uint64_t left = low(a), right = low(b);
                    double x, y;
                    std::memcpy(&x, &left, 8);
                    std::memcpy(&y, &right, 8);
                    double product = x * y;
                    uint64_t bits;
                    std::memcpy(&bits, &product, 8);
                    result = bits;
                }
                break;
            }
            case floatTrunc: {
                if (in[0].size != 8 || size != 8) fail("unsupported floating-point conversion");
                else {
                    uint64_t bits = low(a);
                    double value;
                    std::memcpy(&value, &bits, 8);
                    result = static_cast<uint64_t>(static_cast<int64_t>(value));
                }
                break;
            }
            case callother:
                if (a != 0x11 && a != 0x12) fail("unsupported processor operation %#llx at %#llx", low(a), pc);
                break;
            case int2Float: result = floatingBits(static_cast<double>(signedValue(a, in[0].size)), size); break;
            case floatDiv: result = floatingBits(asDouble(a, in[0].size) / asDouble(b, in[1].size), size); break;
            case floatEqual: result = asDouble(a, in[0].size) == asDouble(b, in[1].size); break;
            case floatLess: result = asDouble(a, in[0].size) < asDouble(b, in[1].size); break;
            case floatNan: result = std::isnan(asDouble(a, in[0].size)); break;
            }
            if (operation.opcode != branch && operation.opcode != cbranch && operation.opcode != branchind &&
                operation.opcode != call && operation.opcode != callind && operation.opcode != ret &&
                operation.opcode != store && operation.output.space != none) put(operation.output, result);
        }
        pc = next;
        return !failed;
    }

    void printHistory() const {
        size_t count = std::min(historyCount, sizeof(history) / sizeof(history[0]));
        for (size_t index = 0; index < count; index++) {
            uint64_t previous = history[(historyCount - count + index) % 32];
            std::fprintf(stderr, "Trace[%zu]: %#llx (RVA %#llx)\n", index,
                         static_cast<unsigned long long>(previous), static_cast<unsigned long long>(previous - base));
        }
    }

    bool prepareThread() {
        setReg64(0x110, fsbase);
        writeNumber(fsbase, fsbase);
        writeNumber(fsbase + 0x28, 0x3736353433323130ULL);
        uint32_t mxcsr = 0x1f80;
        std::memcpy(registers + 0x1090, &mxcsr, sizeof(mxcsr));
        return !failed;
    }

    int run(uint64_t start, uint8_t *result) {
        pc = start;
        for (uint64_t count = 0; count < kInstructionLimit && !failed; count++) {
            if (pc == kStop) return 0;
            if (result && pc == base + kResult) {
                uint64_t stack = reg64(0x20);
                if (!read(stack + 0x10d0, result, 28)) return -1;
                return 0;
            }
            if (pc >= kStub && pc < kStop) {
                if (!runExternal()) return -1;
                continue;
            }
            if (runNested()) {
                if (failed) return -1;
                continue;
            }
            auto found = addresses.find(pc);
            if (found == addresses.end()) {
                fail("missing instruction at %#llx (RVA %#llx)", pc, pc - base);
                printHistory();
                return -1;
            }
            history[historyCount++ % 32] = pc;
            if (!execute(instructions[found->second])) {
                printHistory();
                return -1;
            }
        }
        if (!failed) fail("instruction limit reached");
        return -1;
    }
};

clean_runtime *clean_open(const void *program, size_t program_size, const void *memory, size_t memory_size,
                          char *error, size_t error_size) {
    clean_runtime *runtime = new (std::nothrow) clean_runtime;
    if (!runtime) {
        std::snprintf(error, error_size, "allocating runtime");
        return nullptr;
    }
    if (!runtime->loadMemory(memory, memory_size) || !runtime->loadProgram(program, program_size)) {
        std::snprintf(error, error_size, "%s", runtime->error.c_str());
        clean_close(runtime);
        return nullptr;
    }
    return runtime;
}

int clean_derive(clean_runtime *runtime, const void *response, size_t response_size, uint8_t result[28]) {
    if (!runtime || runtime->failed) return -1;
    if (response_size != 24) return runtime->fail("expected a 24-byte PlayPlay response"), -1;
    uint64_t input = runtime->allocate(24), string = runtime->allocate(24);
    uint64_t first = runtime->allocate(4096), second = runtime->allocate(4096);
    if (runtime->failed) return -1;
    runtime->write(input, response, 24);
    runtime->writeNumber(string, 33ULL);
    runtime->writeNumber(string + 8, 24ULL);
    runtime->writeNumber(string + 16, input);
    runtime->writeNumber(second + 0x68, 1U);
    uint64_t stack = kStack + 0x1f0000;
    runtime->writeNumber(stack, kStop);
    runtime->setReg64(0x20, stack);
    runtime->setReg64(0x38, first);
    runtime->setReg64(0x30, second);
    runtime->setReg64(0x10, string);
    runtime->prepareThread();
    runtime->entropyOffset = 0;
    return runtime->run(runtime->base + kHandler, result);
}

int clean_set_entropy(clean_runtime *runtime, const void *data, size_t size) {
    if (!runtime || !data || !size) return -1;
    const uint8_t *bytes = static_cast<const uint8_t *>(data);
    runtime->entropyOverride.assign(bytes, bytes + size);
    runtime->entropyOffset = 0;
    return 0;
}

int clean_init_cipher(clean_runtime *runtime, const uint8_t key[28]) {
    if (!runtime || runtime->failed) return -1;
    uint64_t context = runtime->allocate(0x400), input = runtime->allocate(28);
    runtime->write(input, key, 28);
    uint64_t stack = kStack + 0x1e0000;
    runtime->writeNumber(stack, kStop);
    runtime->setReg64(0x20, stack);
    runtime->setReg64(0x38, context);
    runtime->setReg64(0x30, input);
    runtime->prepareThread();
    if (runtime->failed || runtime->run(runtime->base + kCipherInit, nullptr) != 0) return -1;
    runtime->cipher = context;
    return 0;
}

int clean_cipher_state(clean_runtime *runtime, void *state, size_t size) {
    if (!runtime) return -1;
    if (!runtime->cipher) return runtime->fail("cipher is not initialized"), -1;
    if (size != 0x310) return runtime->fail("cipher context must be 784 bytes"), -1;
    return runtime->read(runtime->cipher, state, size) ? 0 : -1;
}

int clean_set_cipher_state(clean_runtime *runtime, const void *state, size_t size) {
    if (!runtime) return -1;
    if (!runtime->cipher) {
        runtime->cipher = runtime->allocate(0x400);
        if (!runtime->cipher) return -1;
    }
    if (size != 0x310) return runtime->fail("cipher context must be 784 bytes"), -1;
    return runtime->write(runtime->cipher, state, size) ? 0 : -1;
}

int clean_seek_cipher(clean_runtime *runtime, uint64_t block) {
    if (!runtime) return -1;
    if (!runtime->cipher) return runtime->fail("cipher is not initialized"), -1;
    uint64_t stack = kStack + 0x1e0000;
    runtime->writeNumber(stack, kStop);
    runtime->setReg64(0x20, stack);
    runtime->setReg64(0x38, runtime->cipher);
    runtime->setReg64(0x30, block << 4);
    runtime->setReg64(0x10, 0);
    runtime->setReg64(0x8, 0);
    runtime->setReg64(0x80, 0);
    runtime->prepareThread();
    return runtime->run(runtime->base + 0x251be40, nullptr);
}

int clean_transform_cipher(clean_runtime *runtime) {
    if (!runtime || !runtime->cipher) return -1;
    uint64_t stack = kStack + 0x1e0000;
    runtime->writeNumber(stack, kStop);
    runtime->setReg64(0x20, stack);
    runtime->setReg64(0x38, runtime->cipher + 0xc);
    runtime->setReg64(0x30, runtime->cipher + 0x2f4);
    runtime->prepareThread();
    return runtime->run(runtime->base + 0x251c040, nullptr);
}

const char *clean_error(const clean_runtime *runtime) { return runtime ? runtime->error.c_str() : "no runtime"; }

void clean_close(clean_runtime *runtime) {
    if (!runtime) return;
    for (auto it = runtime->ranges.rbegin(); it != runtime->ranges.rend(); ++it) munmap(reinterpret_cast<void *>(it->start), it->end - it->start);
    delete runtime;
}
