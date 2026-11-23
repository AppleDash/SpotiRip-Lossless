#include <stdint.h>
#include <stddef.h>

typedef uint8_t byte;
typedef uint32_t uint;
typedef uint64_t ulong;
typedef uint64_t undefined8;
typedef uint32_t undefined4;
typedef uint8_t undefined1;
typedef uint16_t undefined2;
typedef uint16_t ushort;

static uint32_t rol32(uint32_t value, uint32_t count) {
    count &= 31;
    return value << count | value >> (-count & 31);
}
static uint64_t rol64(uint64_t value, uint64_t count) {
    count &= 63;
    return value << count | value >> (-count & 63);
}
static void nested_0164e4f0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164e4f0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e4f0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e510(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164e510(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e510((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e530(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164e530(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e530((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e550(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164e550(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e550((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e570(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164e570(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e570((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164e590(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(long *)(lVar1 + lVar2 * 4) = *(long *)(lVar1 + 8 + lVar2 * 4) * *(long *)(lVar1 + lVar2 * 4);
  return;
}

static uintptr_t run_164e590(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e590((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e5b0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164e5b0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e5b0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e5d0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + lVar2 * 4);
  *puVar1 = *puVar1 & *(uint *)(*param_2 + 4 + lVar2 * 4);
  return;
}

static uintptr_t run_164e5d0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e5d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e5f0(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined2 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined2 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_164e5f0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e5f0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164e620(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  piVar1 = (int *)(*param_2 + lVar2 * 4);
  *piVar1 = *piVar1 + *(int *)(*param_2 + 4 + lVar2 * 4);
  return;
}

static uintptr_t run_164e620(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e620((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e640(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164e640(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e640((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164e660(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + lVar3 * 4);
  bVar2 = *(byte *)(*param_2 + 4 + lVar3 * 4) & 0x1f;
  *puVar1 =rol32(*puVar1, bVar2);
  return;
}

static uintptr_t run_164e660(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e660((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e680(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164e680(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e680((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164e6a0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164e6a0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e6a0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e6c0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164e6c0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e6c0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164e6e0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(int *)(lVar1 + 4 + lVar2 * 4) < *(int *)(lVar1 + lVar2 * 4));
  return;
}

static uintptr_t run_164e6e0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e6e0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e710(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164e710(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e710((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e730(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(ulong *)(*param_2 + (long)sVar1 * 4) =
       (ulong)*(byte *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_164e730(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e730((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164e760(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164e760(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e760((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e780(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164e780(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e780((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e7a0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(uint *)(lVar1 + lVar2 * 4) < *(uint *)(lVar1 + 4 + lVar2 * 4));
  return;
}

static uintptr_t run_164e7a0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e7a0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e7d0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164e7d0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e7d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e7f0(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (ulong *)(*param_2 + lVar2 * 4);
  *puVar1 = *puVar1 | *(ulong *)(*param_2 + 8 + lVar2 * 4);
  return;
}

static uintptr_t run_164e7f0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e7f0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e810(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164e810(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e810((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e830(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(int *)(lVar1 + lVar2 * 4) = *(int *)(lVar1 + lVar2 * 4) / *(int *)(lVar1 + 4 + lVar2 * 4);
  return;
}

static uintptr_t run_164e830(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e830((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e850(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164e850(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e850((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e870(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  sVar2 = psVar3[1];
  *param_1 = (uintptr_t)((long)(psVar3 + 2));
  lVar4 = *(long *)(psVar3 + 2);
  *param_1 = (uintptr_t)((long)(psVar3 + 6));
  lVar5 = *(long *)(psVar3 + 6);
  *param_1 = (uintptr_t)((long)(psVar3 + 10));
  *(long *)(*param_2 + (long)sVar1 * 4) = lVar4 * *(long *)(*param_2 + (long)sVar2 * 4) + lVar5;
  return;
}

static uintptr_t run_164e870(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e870((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164e8b0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(int *)(lVar1 + lVar2 * 4) != *(int *)(lVar1 + 4 + lVar2 * 4));
  return;
}

static uintptr_t run_164e8b0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e8b0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e8e0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164e8e0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e8e0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e900(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164e900(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e900((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e920(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164e920(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e920((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e940(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164e940(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e940((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e960(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + lVar2 * 4);
  *puVar1 = *puVar1 | *(uint *)(*param_2 + 4 + lVar2 * 4);
  return;
}

static uintptr_t run_164e960(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e960((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e980(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164e980(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e980((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164e9a0(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  sVar2 = psVar3[1];
  *param_1 = (uintptr_t)((long)(psVar3 + 2));
  lVar4 = *(long *)(psVar3 + 2);
  *param_1 = (uintptr_t)((long)(psVar3 + 6));
  lVar5 = *(long *)(psVar3 + 6);
  *param_1 = (uintptr_t)((long)(psVar3 + 10));
  *(long *)(*param_2 + (long)sVar2 * 4) = lVar4 * *(long *)(*param_2 + (long)sVar1 * 4) + lVar5;
  return;
}

static uintptr_t run_164e9a0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e9a0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164e9e0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164e9e0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164e9e0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ea00(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(long *)(*param_2 + (long)sVar1 * 4) =
       (long)*(int *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_164ea00(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ea00((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164ea30(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164ea30(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ea30((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ea50(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164ea50(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ea50((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ea70(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164ea70(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ea70((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164ea90(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  uVar2 = *(ulong *)(lVar1 + lVar4 * 4);
  uVar3 = *(ulong *)(lVar1 + 8 + lVar4 * 4);
  if ((uVar2 | uVar3) >> 0x20 == 0) {
    *(ulong *)(lVar1 + lVar4 * 4) = (uVar2 & 0xffffffff) / (uVar3 & 0xffffffff);
    return;
  }
  *(ulong *)(lVar1 + lVar4 * 4) = uVar2 / uVar3;
  return;
}

static uintptr_t run_164ea90(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ea90((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ead0(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (ulong *)(*param_2 + lVar3 * 4);
  bVar2 = *(byte *)(*param_2 + 8 + lVar3 * 4) & 0x3f;
  *puVar1 = *puVar1 >> bVar2 | *puVar1 << (0x40 - bVar2);
  return;
}

static uintptr_t run_164ead0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ead0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164eb10(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164eb10(uintptr_t *cursor, uintptr_t *state) {
    nested_0164eb10((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164eb30(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164eb30(uintptr_t *cursor, uintptr_t *state) {
    nested_0164eb30((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164eb50(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164eb50(uintptr_t *cursor, uintptr_t *state) {
    nested_0164eb50((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164eb70(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164eb70(uintptr_t *cursor, uintptr_t *state) {
    nested_0164eb70((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164eb90(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164eb90(uintptr_t *cursor, uintptr_t *state) {
    nested_0164eb90((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ebb0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(long *)(lVar1 + 8 + lVar2 * 4) <= *(long *)(lVar1 + lVar2 * 4));
  return;
}

static uintptr_t run_164ebb0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ebb0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ebe0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(int *)(lVar1 + 4 + lVar2 * 4) <= *(int *)(lVar1 + lVar2 * 4));
  return;
}

static uintptr_t run_164ebe0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ebe0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ec10(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164ec10(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ec10((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ec30(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(long *)(lVar1 + lVar2 * 4) <= *(long *)(lVar1 + 8 + lVar2 * 4));
  return;
}

static uintptr_t run_164ec30(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ec30((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ec60(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (ulong *)(*param_2 + lVar2 * 4);
  *puVar1 = *puVar1 & *(ulong *)(*param_2 + 8 + lVar2 * 4);
  return;
}

static uintptr_t run_164ec60(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ec60((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ec80(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164ec80(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ec80((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164eca0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  lVar5 = (long)*psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar1 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  lVar4 = *param_2;
  uVar2 = *(uint *)(lVar4 + lVar5 * 4);
  *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
  *(undefined2 *)(lVar4 + lVar5 * 4) = *(undefined2 *)((ulong)uVar1 + (ulong)uVar2 + param_2[1]);
  return;
}

static uintptr_t run_164eca0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164eca0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164ece0(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined1 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined1 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_164ece0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ece0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164ed10(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164ed10(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ed10((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ed30(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164ed30(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ed30((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ed50(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164ed50(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ed50((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ed70(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + lVar3 * 4);
  bVar2 = *(byte *)(*param_2 + 4 + lVar3 * 4) & 0x1f;
  *puVar1 = *puVar1 >> bVar2 | *puVar1 << (0x20 - bVar2);
  return;
}

static uintptr_t run_164ed70(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ed70((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ed90(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164ed90(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ed90((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164edb0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164edb0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164edb0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164edd0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164edd0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164edd0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164edf0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(undefined4 *)(lVar1 + lVar2 * 4) =
       *(undefined4 *)(lVar1 + lVar2 * 4 + (ulong)(*(int *)(lVar1 + 8 + lVar2 * 4) == 0) * 4);
  return;
}

static uintptr_t run_164edf0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164edf0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ee20(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164ee20(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ee20((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ee40(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164ee40(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ee40((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ee60(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  psVar5 = (short *)*param_1;
  sVar1 = *psVar5;
  *param_1 = (uintptr_t)((long)(psVar5 + 1));
  sVar2 = psVar5[1];
  *param_1 = (uintptr_t)((long)(psVar5 + 2));
  iVar3 = *(int *)(psVar5 + 2);
  *param_1 = (uintptr_t)((long)(psVar5 + 4));
  iVar4 = *(int *)(psVar5 + 4);
  *param_1 = (uintptr_t)((long)(psVar5 + 6));
  *(int *)(*param_2 + (long)sVar1 * 4) = iVar3 * *(int *)(*param_2 + (long)sVar2 * 4) + iVar4;
  return;
}

static uintptr_t run_164ee60(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ee60((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164eea0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164eea0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164eea0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164eec0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164eec0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164eec0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164eee0(undefined8 *param_1,long *param_2)

{
  short sVar1;
  
  sVar1 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  *(undefined4 *)(*param_2 + (long)sVar1 * 4) = *(undefined4 *)param_2[3];
  return;
}

static uintptr_t run_164eee0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164eee0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ef00(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  piVar1 = (int *)(*param_2 + lVar2 * 4);
  *piVar1 = *piVar1 >> (*(byte *)(*param_2 + 4 + lVar2 * 4) & 0x1f);
  return;
}

static uintptr_t run_164ef00(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ef00((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ef20(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164ef20(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ef20((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ef40(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164ef40(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ef40((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164ef60(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164ef60(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ef60((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ef80(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  lVar4 = *(long *)(psVar3 + 3);
  *param_1 = (uintptr_t)((long)(psVar3 + 7));
  *(ulong *)(*param_2 + (long)sVar1 * 4) = (ulong)*(uint *)(param_2 + 2) * (ulong)uVar2 + lVar4;
  return;
}

static uintptr_t run_164ef80(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ef80((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164efc0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164efc0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164efc0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164efe0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164efe0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164efe0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f000(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164f000(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f000((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f020(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164f020(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f020((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f040(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f040(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f040((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f060(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164f060(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f060((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f080(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164f080(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f080((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f0a0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164f0a0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f0a0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f0c0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164f0c0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f0c0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f0e0(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined4 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined4 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_164f0e0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f0e0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f110(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f110(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f110((undefined8 *)cursor, (long *)state);
    return 0;
}

static ulong nested_0164f130(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  uVar2 = *(ulong *)(lVar1 + lVar4 * 4);
  uVar3 = *(ulong *)(lVar1 + 8 + lVar4 * 4);
  if ((uVar2 | uVar3) >> 0x20 == 0) {
    *(ulong *)(lVar1 + lVar4 * 4) = (uVar2 & 0xffffffff) % (uVar3 & 0xffffffff);
    return (uVar2 & 0xffffffff) / (uVar3 & 0xffffffff);
  }
  *(ulong *)(lVar1 + lVar4 * 4) = uVar2 % uVar3;
  return uVar2 / uVar3;
}

static uintptr_t run_164f130(uintptr_t *cursor, uintptr_t *state) {
    return (uintptr_t)nested_0164f130((undefined8 *)cursor, (long *)state);
}

static void nested_0164f170(undefined8 *param_1,long *param_2)

{
  short sVar1;
  
  sVar1 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  *(undefined4 *)param_2[3] = *(undefined4 *)(*param_2 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_164f170(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f170((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f190(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164f190(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f190((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f1b0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f1b0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f1b0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f1d0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(long *)(lVar1 + lVar2 * 4) < *(long *)(lVar1 + 8 + lVar2 * 4));
  return;
}

static uintptr_t run_164f1d0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f1d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f200(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  plVar1 = (long *)(*param_2 + lVar2 * 4);
  *plVar1 = *plVar1 + *(long *)(*param_2 + 8 + lVar2 * 4);
  return;
}

static uintptr_t run_164f200(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f200((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f220(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164f220(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f220((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f240(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined8 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined8 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_164f240(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f240((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f270(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164f270(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f270((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f290(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164f290(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f290((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f2b0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f2b0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f2b0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f2d0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f2d0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f2d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f2f0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f2f0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f2f0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f310(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164f310(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f310((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f330(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164f330(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f330((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f350(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  sVar2 = psVar3[1];
  *param_1 = (uintptr_t)((long)(psVar3 + 2));
  lVar4 = *(long *)(psVar3 + 2);
  *param_1 = (uintptr_t)((long)(psVar3 + 6));
  lVar5 = *(long *)(psVar3 + 6);
  *param_1 = (uintptr_t)((long)(psVar3 + 10));
  *(long *)(*param_2 + (long)sVar2 * 4) = lVar4 * *(long *)(*param_2 + (long)sVar1 * 4) + lVar5;
  return;
}

static uintptr_t run_164f350(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f350((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f390(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f390(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f390((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f3b0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164f3b0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f3b0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f3d0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f3d0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f3d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f3f0(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  psVar5 = (short *)*param_1;
  sVar1 = *psVar5;
  *param_1 = (uintptr_t)((long)(psVar5 + 1));
  sVar2 = psVar5[1];
  *param_1 = (uintptr_t)((long)(psVar5 + 2));
  iVar3 = *(int *)(psVar5 + 2);
  *param_1 = (uintptr_t)((long)(psVar5 + 4));
  iVar4 = *(int *)(psVar5 + 4);
  *param_1 = (uintptr_t)((long)(psVar5 + 6));
  *(int *)(*param_2 + (long)sVar2 * 4) = iVar3 * *(int *)(*param_2 + (long)sVar1 * 4) + iVar4;
  return;
}

static uintptr_t run_164f3f0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f3f0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f450(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164f450(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f450((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f470(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(ulong *)(lVar1 + 8 + lVar2 * 4) <= *(ulong *)(lVar1 + lVar2 * 4));
  return;
}

static uintptr_t run_164f470(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f470((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f4a0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164f4a0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f4a0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f4c0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f4c0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f4c0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f4e0(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(ulong *)(*param_2 + (long)sVar1 * 4) =
       (ulong)*(uint *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_164f4e0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f4e0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f510(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f510(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f510((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f530(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164f530(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f530((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f550(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f550(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f550((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f570(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(uint *)(lVar1 + lVar2 * 4) <= *(uint *)(lVar1 + 4 + lVar2 * 4));
  return;
}

static uintptr_t run_164f570(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f570((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f5a0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f5a0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f5a0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f5c0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164f5c0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f5c0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f5e0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  lVar5 = (long)*psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar1 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  lVar4 = *param_2;
  uVar2 = *(uint *)(lVar4 + lVar5 * 4);
  *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
  *(undefined1 *)(lVar4 + lVar5 * 4) = *(undefined1 *)((ulong)uVar1 + (ulong)uVar2 + param_2[1]);
  return;
}

static uintptr_t run_164f5e0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f5e0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f620(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164f620(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f620((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f640(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f640(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f640((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f660(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164f660(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f660((undefined8 *)cursor, (long *)state);
    return 0;
}

static ulong nested_0164f680(undefined8 *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar3 = *param_2;
  iVar1 = *(int *)(lVar3 + lVar4 * 4);
  iVar2 = *(int *)(lVar3 + 4 + lVar4 * 4);
  *(int *)(lVar3 + lVar4 * 4) = iVar1 % iVar2;
  return (long)iVar1 / (long)iVar2 & 0xffffffff;
}

static uintptr_t run_164f680(uintptr_t *cursor, uintptr_t *state) {
    return (uintptr_t)nested_0164f680((undefined8 *)cursor, (long *)state);
}

static void nested_0164f6a0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164f6a0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f6a0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f6c0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164f6c0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f6c0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f6e0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f6e0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f6e0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f700(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164f700(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f700((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f720(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164f720(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f720((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f740(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164f740(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f740((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f760(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(long *)(lVar1 + lVar2 * 4) == *(long *)(lVar1 + 8 + lVar2 * 4));
  return;
}

static uintptr_t run_164f760(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f760((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f790(long *param_1,long *param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar1 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  uVar2 = psVar4[1];
  *param_1 = (uintptr_t)((long)(psVar4 + 2));
  iVar3 = *(int *)(psVar4 + 2);
  *param_1 = (uintptr_t)((long)(psVar4 + 4));
  *(uint *)(*param_2 + (long)sVar1 * 4) = (uint)uVar2 * (int)param_2[2] + iVar3;
  return;
}

static uintptr_t run_164f790(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f790((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f7d0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f7d0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f7d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f810(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164f810(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f810((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f850(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164f850(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f850((undefined8 *)cursor, (long *)state);
    return 0;
}

static ulong nested_0164f870(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar3 = *param_2;
  uVar1 = *(uint *)(lVar3 + lVar4 * 4);
  uVar2 = *(uint *)(lVar3 + 4 + lVar4 * 4);
  *(uint *)(lVar3 + lVar4 * 4) = uVar1 % uVar2;
  return (ulong)uVar1 / (ulong)uVar2;
}

static uintptr_t run_164f870(uintptr_t *cursor, uintptr_t *state) {
    return (uintptr_t)nested_0164f870((undefined8 *)cursor, (long *)state);
}

static void nested_0164f890(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164f890(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f890((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f8d0(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(long *)(*param_2 + (long)sVar1 * 4) =
       (long)*(char *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_164f8d0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f8d0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164f900(long *param_1)

{
  *param_1 = (uintptr_t)(*param_1 + 2);
  return;
}

static uintptr_t run_164f900(uintptr_t *cursor, uintptr_t *state) {
    (void)state;
    nested_0164f900((long *)cursor);
    return 0;
}

static void nested_0164f910(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f910(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f910((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f930(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164f930(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f930((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f950(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164f950(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f950((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f970(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164f970(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f970((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f990(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f990(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f990((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f9b0(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  piVar1 = (int *)(*param_2 + lVar2 * 4);
  *piVar1 = *piVar1 - *(int *)(*param_2 + 4 + lVar2 * 4);
  return;
}

static uintptr_t run_164f9b0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f9b0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f9d0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164f9d0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f9d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164f9f0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164f9f0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164f9f0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164fa10(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(long *)(*param_2 + (long)sVar1 * 4) =
       (long)*(short *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_164fa10(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fa10((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164fa40(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined1 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined1 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_164fa40(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fa40((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164fa70(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar3 = *param_2;
  uVar1 = *(uint *)(lVar3 + lVar4 * 4);
  uVar2 = *(uint *)(lVar3 + 4 + lVar4 * 4);
  *(uint *)(lVar3 + lVar4 * 4) = uVar1 + uVar2 + (uVar1 & uVar2) * -2;
  return;
}

static uintptr_t run_164fa70(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fa70((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164faa0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  plVar1 = (long *)(*param_2 + lVar2 * 4);
  *plVar1 = *plVar1 >> (*(byte *)(*param_2 + 8 + lVar2 * 4) & 0x3f);
  return;
}

static uintptr_t run_164faa0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164faa0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fac0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164fac0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fac0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fae0(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  psVar5 = (short *)*param_1;
  sVar1 = *psVar5;
  *param_1 = (uintptr_t)((long)(psVar5 + 1));
  sVar2 = psVar5[1];
  *param_1 = (uintptr_t)((long)(psVar5 + 2));
  iVar3 = *(int *)(psVar5 + 2);
  *param_1 = (uintptr_t)((long)(psVar5 + 4));
  iVar4 = *(int *)(psVar5 + 4);
  *param_1 = (uintptr_t)((long)(psVar5 + 6));
  *(int *)(*param_2 + (long)sVar2 * 4) = iVar3 * *(int *)(*param_2 + (long)sVar1 * 4) + iVar4;
  return;
}

static uintptr_t run_164fae0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fae0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164fb20(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164fb20(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fb20((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fb40(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  *(ulong *)(*param_2 + lVar1 * 4) = (ulong)*(uint *)(*param_2 + lVar1 * 4);
  return;
}

static uintptr_t run_164fb40(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fb40((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fb60(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined2 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined2 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_164fb60(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fb60((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164fb90(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164fb90(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fb90((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fbb0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164fbb0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fbb0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fbd0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  plVar1 = (long *)(*param_2 + lVar2 * 4);
  *plVar1 = *plVar1 << (*(byte *)(*param_2 + 8 + lVar2 * 4) & 0x3f);
  return;
}

static uintptr_t run_164fbd0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fbd0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fbf0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164fbf0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fbf0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fc10(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164fc10(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fc10((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164fc30(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164fc30(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fc30((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164fc50(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) = *(uint *)(lVar1 + lVar2 * 4) / *(uint *)(lVar1 + 4 + lVar2 * 4);
  return;
}

static uintptr_t run_164fc50(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fc50((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fc70(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(int *)(lVar1 + lVar2 * 4) < *(int *)(lVar1 + 4 + lVar2 * 4));
  return;
}

static uintptr_t run_164fc70(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fc70((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fca0(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined4 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined4 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_164fca0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fca0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164fcd0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164fcd0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fcd0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fcf0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164fcf0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fcf0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fd40(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164fd40(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fd40((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fd60(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164fd60(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fd60((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fd80(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(ulong *)(lVar1 + 8 + lVar2 * 4) < *(ulong *)(lVar1 + lVar2 * 4));
  return;
}

static uintptr_t run_164fd80(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fd80((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fdb0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164fdb0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fdb0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fdd0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164fdd0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fdd0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fdf0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  *(uint *)(*param_2 + lVar1 * 4) = (uint)(*(long *)(*param_2 + lVar1 * 4) == 0);
  return;
}

static uintptr_t run_164fdf0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fdf0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fe10(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164fe10(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fe10((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fe30(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164fe30(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fe30((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164fe50(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164fe50(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fe50((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fe70(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164fe70(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fe70((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fe90(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164fe90(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fe90((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164feb0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  lVar5 = (long)*psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar1 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  lVar4 = *param_2;
  uVar2 = *(uint *)(lVar4 + lVar5 * 4);
  *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
  *(undefined1 *)(lVar4 + lVar5 * 4) = *(undefined1 *)((ulong)uVar1 + (ulong)uVar2 + param_2[1]);
  *(int *)(*param_2 + lVar5 * 4) = (int)*(char *)(*param_2 + lVar5 * 4);
  return;
}

static uintptr_t run_164feb0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164feb0((long *)cursor, (long *)state);
    return 0;
}

static void nested_0164fef0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_164fef0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fef0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ff10(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  uVar2 = *(ulong *)(lVar1 + lVar4 * 4);
  uVar3 = *(ulong *)(lVar1 + 8 + lVar4 * 4);
  if ((uVar2 | uVar3) >> 0x20 == 0) {
    *(ulong *)(lVar1 + lVar4 * 4) = (uVar2 & 0xffffffff) / (uVar3 & 0xffffffff);
    return;
  }
  *(long *)(lVar1 + lVar4 * 4) = (long)uVar2 / (long)uVar3;
  return;
}

static uintptr_t run_164ff10(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ff10((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ff50(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  piVar1 = (int *)(*param_2 + lVar2 * 4);
  *piVar1 = *piVar1 << (*(byte *)(*param_2 + 4 + lVar2 * 4) & 0x1f);
  return;
}

static uintptr_t run_164ff50(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ff50((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ff70(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164ff70(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ff70((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ff90(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_164ff90(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ff90((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ffb0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  *(uint *)(*param_2 + lVar1 * 4) = (uint)(*(int *)(*param_2 + lVar1 * 4) == 0);
  return;
}

static uintptr_t run_164ffb0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ffb0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164ffd0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_164ffd0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164ffd0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_0164fff0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_164fff0(uintptr_t *cursor, uintptr_t *state) {
    nested_0164fff0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650010(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1650010(uintptr_t *cursor, uintptr_t *state) {
    nested_01650010((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650030(long *param_1,long *param_2)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(undefined4 *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined4 *)(*param_2 + (long)sVar1 * 4) = uVar2;
  return;
}

static uintptr_t run_1650030(uintptr_t *cursor, uintptr_t *state) {
    nested_01650030((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650050(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1650050(uintptr_t *cursor, uintptr_t *state) {
    nested_01650050((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650070(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (ulong *)(*param_2 + lVar2 * 4);
  *puVar1 = *puVar1 >> (*(byte *)(*param_2 + 8 + lVar2 * 4) & 0x3f);
  return;
}

static uintptr_t run_1650070(uintptr_t *cursor, uintptr_t *state) {
    nested_01650070((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650090(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650090(uintptr_t *cursor, uintptr_t *state) {
    nested_01650090((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016500b0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  *(long *)(*param_2 + lVar1 * 4) = (long)*(int *)(*param_2 + lVar1 * 4);
  return;
}

static uintptr_t run_16500b0(uintptr_t *cursor, uintptr_t *state) {
    nested_016500b0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016500d0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_16500d0(uintptr_t *cursor, uintptr_t *state) {
    nested_016500d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016500f0(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined8 *)(*param_2 + (long)sVar1 * 4) =
       *(undefined8 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_16500f0(uintptr_t *cursor, uintptr_t *state) {
    nested_016500f0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650120(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(ulong *)(lVar1 + lVar2 * 4) < *(ulong *)(lVar1 + 8 + lVar2 * 4));
  return;
}

static uintptr_t run_1650120(uintptr_t *cursor, uintptr_t *state) {
    nested_01650120((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650150(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650150(uintptr_t *cursor, uintptr_t *state) {
    nested_01650150((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650170(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650170(uintptr_t *cursor, uintptr_t *state) {
    nested_01650170((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650190(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1650190(uintptr_t *cursor, uintptr_t *state) {
    nested_01650190((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016501b0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_16501b0(uintptr_t *cursor, uintptr_t *state) {
    nested_016501b0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016501d0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_16501d0(uintptr_t *cursor, uintptr_t *state) {
    nested_016501d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016501f0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_16501f0(uintptr_t *cursor, uintptr_t *state) {
    nested_016501f0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650210(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650210(uintptr_t *cursor, uintptr_t *state) {
    nested_01650210((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650230(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650230(uintptr_t *cursor, uintptr_t *state) {
    nested_01650230((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650250(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1650250(uintptr_t *cursor, uintptr_t *state) {
    nested_01650250((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650270(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(ulong *)(lVar1 + lVar2 * 4) <= *(ulong *)(lVar1 + 8 + lVar2 * 4));
  return;
}

static uintptr_t run_1650270(uintptr_t *cursor, uintptr_t *state) {
    nested_01650270((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016502a0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_16502a0(uintptr_t *cursor, uintptr_t *state) {
    nested_016502a0((long *)cursor, (long *)state);
    return 0;
}

static void nested_016502c0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_16502c0(uintptr_t *cursor, uintptr_t *state) {
    nested_016502c0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016502e0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_16502e0(uintptr_t *cursor, uintptr_t *state) {
    nested_016502e0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650300(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  uVar2 = *(ulong *)(lVar1 + lVar4 * 4);
  uVar3 = *(ulong *)(lVar1 + 8 + lVar4 * 4);
  *(ulong *)(lVar1 + lVar4 * 4) = uVar3 + uVar2 + (uVar3 & uVar2) * -2;
  return;
}

static uintptr_t run_1650300(uintptr_t *cursor, uintptr_t *state) {
    nested_01650300((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650330(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1650330(uintptr_t *cursor, uintptr_t *state) {
    nested_01650330((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650350(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1650350(uintptr_t *cursor, uintptr_t *state) {
    nested_01650350((undefined8 *)cursor, (long *)state);
    return 0;
}

static ulong nested_01650370(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  uVar2 = *(ulong *)(lVar1 + lVar4 * 4);
  uVar3 = *(ulong *)(lVar1 + 8 + lVar4 * 4);
  if ((uVar2 | uVar3) >> 0x20 == 0) {
    *(ulong *)(lVar1 + lVar4 * 4) = (uVar2 & 0xffffffff) % (uVar3 & 0xffffffff);
    return (uVar2 & 0xffffffff) / (uVar3 & 0xffffffff);
  }
  *(long *)(lVar1 + lVar4 * 4) = (long)uVar2 % (long)uVar3;
  return (long)uVar2 / (long)uVar3;
}

static uintptr_t run_1650370(uintptr_t *cursor, uintptr_t *state) {
    return (uintptr_t)nested_01650370((undefined8 *)cursor, (long *)state);
}

static void nested_016503b0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_16503b0(uintptr_t *cursor, uintptr_t *state) {
    nested_016503b0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016503d0(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (ulong *)(*param_2 + lVar3 * 4);
  bVar2 = *(byte *)(*param_2 + 8 + lVar3 * 4) & 0x3f;
  *puVar1 =rol64(*puVar1, bVar2);
  return;
}

static uintptr_t run_16503d0(uintptr_t *cursor, uintptr_t *state) {
    nested_016503d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016503f0(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(ulong *)(*param_2 + (long)sVar1 * 4) =
       (ulong)*(ushort *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_16503f0(uintptr_t *cursor, uintptr_t *state) {
    nested_016503f0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650420(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650420(uintptr_t *cursor, uintptr_t *state) {
    nested_01650420((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650440(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(int *)(lVar1 + lVar2 * 4) == *(int *)(lVar1 + 4 + lVar2 * 4));
  return;
}

static uintptr_t run_1650440(uintptr_t *cursor, uintptr_t *state) {
    nested_01650440((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650470(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  lVar5 = (long)*psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar1 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  lVar4 = *param_2;
  uVar2 = *(uint *)(lVar4 + lVar5 * 4);
  *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
  *(undefined4 *)(lVar4 + lVar5 * 4) = *(undefined4 *)((ulong)uVar1 + (ulong)uVar2 + param_2[1]);
  return;
}

static uintptr_t run_1650470(uintptr_t *cursor, uintptr_t *state) {
    nested_01650470((long *)cursor, (long *)state);
    return 0;
}

static void nested_016504c0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_16504c0(uintptr_t *cursor, uintptr_t *state) {
    nested_016504c0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016504e0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_16504e0(uintptr_t *cursor, uintptr_t *state) {
    nested_016504e0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650500(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(int *)(lVar1 + lVar2 * 4) = *(int *)(lVar1 + 4 + lVar2 * 4) * *(int *)(lVar1 + lVar2 * 4);
  return;
}

static uintptr_t run_1650500(uintptr_t *cursor, uintptr_t *state) {
    nested_01650500((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650520(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1650520(uintptr_t *cursor, uintptr_t *state) {
    nested_01650520((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650540(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1650540(uintptr_t *cursor, uintptr_t *state) {
    nested_01650540((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650560(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1650560(uintptr_t *cursor, uintptr_t *state) {
    nested_01650560((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650580(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1650580(uintptr_t *cursor, uintptr_t *state) {
    nested_01650580((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016505a0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_16505a0(uintptr_t *cursor, uintptr_t *state) {
    nested_016505a0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016505c0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_16505c0(uintptr_t *cursor, uintptr_t *state) {
    nested_016505c0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016505e0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_16505e0(uintptr_t *cursor, uintptr_t *state) {
    nested_016505e0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650600(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1650600(uintptr_t *cursor, uintptr_t *state) {
    nested_01650600((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650620(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650620(uintptr_t *cursor, uintptr_t *state) {
    nested_01650620((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650640(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1650640(uintptr_t *cursor, uintptr_t *state) {
    nested_01650640((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650660(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(uint *)(lVar1 + 4 + lVar2 * 4) < *(uint *)(lVar1 + lVar2 * 4));
  return;
}

static uintptr_t run_1650660(uintptr_t *cursor, uintptr_t *state) {
    nested_01650660((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650690(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(uint *)(lVar1 + 4 + lVar2 * 4) <= *(uint *)(lVar1 + lVar2 * 4));
  return;
}

static uintptr_t run_1650690(uintptr_t *cursor, uintptr_t *state) {
    nested_01650690((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016506c0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(long *)(lVar1 + 8 + lVar2 * 4) < *(long *)(lVar1 + lVar2 * 4));
  return;
}

static uintptr_t run_16506c0(uintptr_t *cursor, uintptr_t *state) {
    nested_016506c0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016506f0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_16506f0(uintptr_t *cursor, uintptr_t *state) {
    nested_016506f0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650710(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650710(uintptr_t *cursor, uintptr_t *state) {
    nested_01650710((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650730(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1650730(uintptr_t *cursor, uintptr_t *state) {
    nested_01650730((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650750(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1650750(uintptr_t *cursor, uintptr_t *state) {
    nested_01650750((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650770(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1650770(uintptr_t *cursor, uintptr_t *state) {
    nested_01650770((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650790(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1650790(uintptr_t *cursor, uintptr_t *state) {
    nested_01650790((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016507b0(long *param_1,long *param_2)

{
  short sVar1;
  short *psVar2;
  undefined8 uVar3;
  
  psVar2 = (short *)*param_1;
  sVar1 = *psVar2;
  *param_1 = (uintptr_t)((long)(psVar2 + 1));
  uVar3 = *(undefined8 *)(psVar2 + 1);
  *param_1 = (uintptr_t)((long)(psVar2 + 5));
  *(undefined8 *)(*param_2 + (long)sVar1 * 4) = uVar3;
  return;
}

static uintptr_t run_16507b0(uintptr_t *cursor, uintptr_t *state) {
    nested_016507b0((long *)cursor, (long *)state);
    return 0;
}

static void nested_016507e0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  lVar5 = (long)*psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar1 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  lVar4 = *param_2;
  uVar2 = *(uint *)(lVar4 + lVar5 * 4);
  *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
  *(undefined2 *)(lVar4 + lVar5 * 4) = *(undefined2 *)((ulong)uVar1 + (ulong)uVar2 + param_2[1]);
  *(int *)(*param_2 + lVar5 * 4) = (int)*(short *)(*param_2 + lVar5 * 4);
  return;
}

static uintptr_t run_16507e0(uintptr_t *cursor, uintptr_t *state) {
    nested_016507e0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650820(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1650820(uintptr_t *cursor, uintptr_t *state) {
    nested_01650820((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650840(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650840(uintptr_t *cursor, uintptr_t *state) {
    nested_01650840((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650860(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650860(uintptr_t *cursor, uintptr_t *state) {
    nested_01650860((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650880(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  plVar1 = (long *)(*param_2 + lVar2 * 4);
  *plVar1 = *plVar1 - *(long *)(*param_2 + 8 + lVar2 * 4);
  return;
}

static uintptr_t run_1650880(uintptr_t *cursor, uintptr_t *state) {
    nested_01650880((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016508a0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_16508a0(uintptr_t *cursor, uintptr_t *state) {
    nested_016508a0((long *)cursor, (long *)state);
    return 0;
}

static void nested_016508c0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_16508c0(uintptr_t *cursor, uintptr_t *state) {
    nested_016508c0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016508e0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_16508e0(uintptr_t *cursor, uintptr_t *state) {
    nested_016508e0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650900(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(int *)(lVar1 + lVar2 * 4) <= *(int *)(lVar1 + 4 + lVar2 * 4));
  return;
}

static uintptr_t run_1650900(uintptr_t *cursor, uintptr_t *state) {
    nested_01650900((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650930(long *param_1,long *param_2)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(undefined4 *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined4 *)(*param_2 + (long)sVar1 * 4) = uVar2;
  return;
}

static uintptr_t run_1650930(uintptr_t *cursor, uintptr_t *state) {
    nested_01650930((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650950(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1650950(uintptr_t *cursor, uintptr_t *state) {
    nested_01650950((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650970(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650970(uintptr_t *cursor, uintptr_t *state) {
    nested_01650970((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650990(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650990(uintptr_t *cursor, uintptr_t *state) {
    nested_01650990((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016509b0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_16509b0(uintptr_t *cursor, uintptr_t *state) {
    nested_016509b0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016509d0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_16509d0(uintptr_t *cursor, uintptr_t *state) {
    nested_016509d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016509f0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(long *)(lVar1 + lVar2 * 4) = *(long *)(lVar1 + 8 + lVar2 * 4) * *(long *)(lVar1 + lVar2 * 4);
  return;
}

static uintptr_t run_16509f0(uintptr_t *cursor, uintptr_t *state) {
    nested_016509f0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650a10(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1650a10(uintptr_t *cursor, uintptr_t *state) {
    nested_01650a10((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650a30(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + lVar2 * 4);
  *puVar1 = *puVar1 & *(uint *)(*param_2 + 4 + lVar2 * 4);
  return;
}

static uintptr_t run_1650a30(uintptr_t *cursor, uintptr_t *state) {
    nested_01650a30((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650a50(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined2 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined2 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_1650a50(uintptr_t *cursor, uintptr_t *state) {
    nested_01650a50((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650a80(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  piVar1 = (int *)(*param_2 + lVar2 * 4);
  *piVar1 = *piVar1 + *(int *)(*param_2 + 4 + lVar2 * 4);
  return;
}

static uintptr_t run_1650a80(uintptr_t *cursor, uintptr_t *state) {
    nested_01650a80((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650aa0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1650aa0(uintptr_t *cursor, uintptr_t *state) {
    nested_01650aa0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650ac0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + lVar3 * 4);
  bVar2 = *(byte *)(*param_2 + 4 + lVar3 * 4) & 0x1f;
  *puVar1 =rol32(*puVar1, bVar2);
  return;
}

static uintptr_t run_1650ac0(uintptr_t *cursor, uintptr_t *state) {
    nested_01650ac0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650ae0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1650ae0(uintptr_t *cursor, uintptr_t *state) {
    nested_01650ae0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650b00(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1650b00(uintptr_t *cursor, uintptr_t *state) {
    nested_01650b00((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650b20(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1650b20(uintptr_t *cursor, uintptr_t *state) {
    nested_01650b20((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650b40(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(int *)(lVar1 + 4 + lVar2 * 4) < *(int *)(lVar1 + lVar2 * 4));
  return;
}

static uintptr_t run_1650b40(uintptr_t *cursor, uintptr_t *state) {
    nested_01650b40((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650b70(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650b70(uintptr_t *cursor, uintptr_t *state) {
    nested_01650b70((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650b90(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(ulong *)(*param_2 + (long)sVar1 * 4) =
       (ulong)*(byte *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_1650b90(uintptr_t *cursor, uintptr_t *state) {
    nested_01650b90((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650bc0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1650bc0(uintptr_t *cursor, uintptr_t *state) {
    nested_01650bc0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650be0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1650be0(uintptr_t *cursor, uintptr_t *state) {
    nested_01650be0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650c30(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650c30(uintptr_t *cursor, uintptr_t *state) {
    nested_01650c30((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650c50(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (ulong *)(*param_2 + lVar2 * 4);
  *puVar1 = *puVar1 | *(ulong *)(*param_2 + 8 + lVar2 * 4);
  return;
}

static uintptr_t run_1650c50(uintptr_t *cursor, uintptr_t *state) {
    nested_01650c50((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650c70(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1650c70(uintptr_t *cursor, uintptr_t *state) {
    nested_01650c70((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650c90(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(int *)(lVar1 + lVar2 * 4) = *(int *)(lVar1 + lVar2 * 4) / *(int *)(lVar1 + 4 + lVar2 * 4);
  return;
}

static uintptr_t run_1650c90(uintptr_t *cursor, uintptr_t *state) {
    nested_01650c90((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650cb0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1650cb0(uintptr_t *cursor, uintptr_t *state) {
    nested_01650cb0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650cd0(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  sVar2 = psVar3[1];
  *param_1 = (uintptr_t)((long)(psVar3 + 2));
  lVar4 = *(long *)(psVar3 + 2);
  *param_1 = (uintptr_t)((long)(psVar3 + 6));
  lVar5 = *(long *)(psVar3 + 6);
  *param_1 = (uintptr_t)((long)(psVar3 + 10));
  *(long *)(*param_2 + (long)sVar1 * 4) = lVar4 * *(long *)(*param_2 + (long)sVar2 * 4) + lVar5;
  return;
}

static uintptr_t run_1650cd0(uintptr_t *cursor, uintptr_t *state) {
    nested_01650cd0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650d10(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(int *)(lVar1 + lVar2 * 4) != *(int *)(lVar1 + 4 + lVar2 * 4));
  return;
}

static uintptr_t run_1650d10(uintptr_t *cursor, uintptr_t *state) {
    nested_01650d10((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650d40(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1650d40(uintptr_t *cursor, uintptr_t *state) {
    nested_01650d40((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650d60(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650d60(uintptr_t *cursor, uintptr_t *state) {
    nested_01650d60((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650d80(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1650d80(uintptr_t *cursor, uintptr_t *state) {
    nested_01650d80((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650da0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1650da0(uintptr_t *cursor, uintptr_t *state) {
    nested_01650da0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650dc0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + lVar2 * 4);
  *puVar1 = *puVar1 | *(uint *)(*param_2 + 4 + lVar2 * 4);
  return;
}

static uintptr_t run_1650dc0(uintptr_t *cursor, uintptr_t *state) {
    nested_01650dc0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650de0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1650de0(uintptr_t *cursor, uintptr_t *state) {
    nested_01650de0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650e00(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  sVar2 = psVar3[1];
  *param_1 = (uintptr_t)((long)(psVar3 + 2));
  lVar4 = *(long *)(psVar3 + 2);
  *param_1 = (uintptr_t)((long)(psVar3 + 6));
  lVar5 = *(long *)(psVar3 + 6);
  *param_1 = (uintptr_t)((long)(psVar3 + 10));
  *(long *)(*param_2 + (long)sVar2 * 4) = lVar4 * *(long *)(*param_2 + (long)sVar1 * 4) + lVar5;
  return;
}

static uintptr_t run_1650e00(uintptr_t *cursor, uintptr_t *state) {
    nested_01650e00((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650e40(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1650e40(uintptr_t *cursor, uintptr_t *state) {
    nested_01650e40((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650e60(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(long *)(*param_2 + (long)sVar1 * 4) =
       (long)*(int *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_1650e60(uintptr_t *cursor, uintptr_t *state) {
    nested_01650e60((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650e90(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1650e90(uintptr_t *cursor, uintptr_t *state) {
    nested_01650e90((long *)cursor, (long *)state);
    return 0;
}

static void nested_01650ed0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650ed0(uintptr_t *cursor, uintptr_t *state) {
    nested_01650ed0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650ef0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  uVar2 = *(ulong *)(lVar1 + lVar4 * 4);
  uVar3 = *(ulong *)(lVar1 + 8 + lVar4 * 4);
  if ((uVar2 | uVar3) >> 0x20 == 0) {
    *(ulong *)(lVar1 + lVar4 * 4) = (uVar2 & 0xffffffff) / (uVar3 & 0xffffffff);
    return;
  }
  *(ulong *)(lVar1 + lVar4 * 4) = uVar2 / uVar3;
  return;
}

static uintptr_t run_1650ef0(uintptr_t *cursor, uintptr_t *state) {
    nested_01650ef0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650f30(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (ulong *)(*param_2 + lVar3 * 4);
  bVar2 = *(byte *)(*param_2 + 8 + lVar3 * 4) & 0x3f;
  *puVar1 = *puVar1 >> bVar2 | *puVar1 << (0x40 - bVar2);
  return;
}

static uintptr_t run_1650f30(uintptr_t *cursor, uintptr_t *state) {
    nested_01650f30((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650f50(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1650f50(uintptr_t *cursor, uintptr_t *state) {
    nested_01650f50((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650f90(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1650f90(uintptr_t *cursor, uintptr_t *state) {
    nested_01650f90((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650fb0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1650fb0(uintptr_t *cursor, uintptr_t *state) {
    nested_01650fb0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650fd0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1650fd0(uintptr_t *cursor, uintptr_t *state) {
    nested_01650fd0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01650ff0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1650ff0(uintptr_t *cursor, uintptr_t *state) {
    nested_01650ff0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651070(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1651070(uintptr_t *cursor, uintptr_t *state) {
    nested_01651070((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651090(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(long *)(lVar1 + lVar2 * 4) <= *(long *)(lVar1 + 8 + lVar2 * 4));
  return;
}

static uintptr_t run_1651090(uintptr_t *cursor, uintptr_t *state) {
    nested_01651090((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016510c0(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (ulong *)(*param_2 + lVar2 * 4);
  *puVar1 = *puVar1 & *(ulong *)(*param_2 + 8 + lVar2 * 4);
  return;
}

static uintptr_t run_16510c0(uintptr_t *cursor, uintptr_t *state) {
    nested_016510c0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016510e0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_16510e0(uintptr_t *cursor, uintptr_t *state) {
    nested_016510e0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651100(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  lVar5 = (long)*psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar1 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  lVar4 = *param_2;
  uVar2 = *(uint *)(lVar4 + lVar5 * 4);
  *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
  *(undefined2 *)(lVar4 + lVar5 * 4) = *(undefined2 *)((ulong)uVar1 + (ulong)uVar2 + param_2[1]);
  return;
}

static uintptr_t run_1651100(uintptr_t *cursor, uintptr_t *state) {
    nested_01651100((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651140(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined1 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined1 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_1651140(uintptr_t *cursor, uintptr_t *state) {
    nested_01651140((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651170(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1651170(uintptr_t *cursor, uintptr_t *state) {
    nested_01651170((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651190(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1651190(uintptr_t *cursor, uintptr_t *state) {
    nested_01651190((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016511b0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_16511b0(uintptr_t *cursor, uintptr_t *state) {
    nested_016511b0((long *)cursor, (long *)state);
    return 0;
}

static void nested_016511d0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + lVar3 * 4);
  bVar2 = *(byte *)(*param_2 + 4 + lVar3 * 4) & 0x1f;
  *puVar1 = *puVar1 >> bVar2 | *puVar1 << (0x20 - bVar2);
  return;
}

static uintptr_t run_16511d0(uintptr_t *cursor, uintptr_t *state) {
    nested_016511d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016511f0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_16511f0(uintptr_t *cursor, uintptr_t *state) {
    nested_016511f0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651210(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1651210(uintptr_t *cursor, uintptr_t *state) {
    nested_01651210((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651230(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1651230(uintptr_t *cursor, uintptr_t *state) {
    nested_01651230((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651250(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(undefined4 *)(lVar1 + lVar2 * 4) =
       *(undefined4 *)(lVar1 + lVar2 * 4 + (ulong)(*(int *)(lVar1 + 8 + lVar2 * 4) == 0) * 4);
  return;
}

static uintptr_t run_1651250(uintptr_t *cursor, uintptr_t *state) {
    nested_01651250((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651280(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1651280(uintptr_t *cursor, uintptr_t *state) {
    nested_01651280((long *)cursor, (long *)state);
    return 0;
}

static void nested_016512a0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_16512a0(uintptr_t *cursor, uintptr_t *state) {
    nested_016512a0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016512c0(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  psVar5 = (short *)*param_1;
  sVar1 = *psVar5;
  *param_1 = (uintptr_t)((long)(psVar5 + 1));
  sVar2 = psVar5[1];
  *param_1 = (uintptr_t)((long)(psVar5 + 2));
  iVar3 = *(int *)(psVar5 + 2);
  *param_1 = (uintptr_t)((long)(psVar5 + 4));
  iVar4 = *(int *)(psVar5 + 4);
  *param_1 = (uintptr_t)((long)(psVar5 + 6));
  *(int *)(*param_2 + (long)sVar1 * 4) = iVar3 * *(int *)(*param_2 + (long)sVar2 * 4) + iVar4;
  return;
}

static uintptr_t run_16512c0(uintptr_t *cursor, uintptr_t *state) {
    nested_016512c0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651300(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1651300(uintptr_t *cursor, uintptr_t *state) {
    nested_01651300((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651320(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1651320(uintptr_t *cursor, uintptr_t *state) {
    nested_01651320((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651340(undefined8 *param_1,long *param_2)

{
  short sVar1;
  
  sVar1 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  *(undefined4 *)(*param_2 + (long)sVar1 * 4) = *(undefined4 *)param_2[3];
  return;
}

static uintptr_t run_1651340(uintptr_t *cursor, uintptr_t *state) {
    nested_01651340((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651380(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1651380(uintptr_t *cursor, uintptr_t *state) {
    nested_01651380((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016513a0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_16513a0(uintptr_t *cursor, uintptr_t *state) {
    nested_016513a0((long *)cursor, (long *)state);
    return 0;
}

static void nested_016513c0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_16513c0(uintptr_t *cursor, uintptr_t *state) {
    nested_016513c0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016513e0(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  lVar4 = *(long *)(psVar3 + 3);
  *param_1 = (uintptr_t)((long)(psVar3 + 7));
  *(ulong *)(*param_2 + (long)sVar1 * 4) = (ulong)*(uint *)(param_2 + 2) * (ulong)uVar2 + lVar4;
  return;
}

static uintptr_t run_16513e0(uintptr_t *cursor, uintptr_t *state) {
    nested_016513e0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651420(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1651420(uintptr_t *cursor, uintptr_t *state) {
    nested_01651420((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651440(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1651440(uintptr_t *cursor, uintptr_t *state) {
    nested_01651440((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651460(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1651460(uintptr_t *cursor, uintptr_t *state) {
    nested_01651460((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651480(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1651480(uintptr_t *cursor, uintptr_t *state) {
    nested_01651480((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016514a0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_16514a0(uintptr_t *cursor, uintptr_t *state) {
    nested_016514a0((long *)cursor, (long *)state);
    return 0;
}

static void nested_016514c0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_16514c0(uintptr_t *cursor, uintptr_t *state) {
    nested_016514c0((long *)cursor, (long *)state);
    return 0;
}

static void nested_016514e0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_16514e0(uintptr_t *cursor, uintptr_t *state) {
    nested_016514e0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651500(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1651500(uintptr_t *cursor, uintptr_t *state) {
    nested_01651500((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651520(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1651520(uintptr_t *cursor, uintptr_t *state) {
    nested_01651520((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651540(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined4 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined4 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_1651540(uintptr_t *cursor, uintptr_t *state) {
    nested_01651540((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651570(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1651570(uintptr_t *cursor, uintptr_t *state) {
    nested_01651570((undefined8 *)cursor, (long *)state);
    return 0;
}

static ulong nested_01651590(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  uVar2 = *(ulong *)(lVar1 + lVar4 * 4);
  uVar3 = *(ulong *)(lVar1 + 8 + lVar4 * 4);
  if ((uVar2 | uVar3) >> 0x20 == 0) {
    *(ulong *)(lVar1 + lVar4 * 4) = (uVar2 & 0xffffffff) % (uVar3 & 0xffffffff);
    return (uVar2 & 0xffffffff) / (uVar3 & 0xffffffff);
  }
  *(ulong *)(lVar1 + lVar4 * 4) = uVar2 % uVar3;
  return uVar2 / uVar3;
}

static uintptr_t run_1651590(uintptr_t *cursor, uintptr_t *state) {
    return (uintptr_t)nested_01651590((undefined8 *)cursor, (long *)state);
}

static void nested_016515d0(undefined8 *param_1,long *param_2)

{
  short sVar1;
  
  sVar1 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  *(undefined4 *)param_2[3] = *(undefined4 *)(*param_2 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_16515d0(uintptr_t *cursor, uintptr_t *state) {
    nested_016515d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016515f0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_16515f0(uintptr_t *cursor, uintptr_t *state) {
    nested_016515f0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651610(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1651610(uintptr_t *cursor, uintptr_t *state) {
    nested_01651610((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651630(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(long *)(lVar1 + lVar2 * 4) < *(long *)(lVar1 + 8 + lVar2 * 4));
  return;
}

static uintptr_t run_1651630(uintptr_t *cursor, uintptr_t *state) {
    nested_01651630((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651660(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  plVar1 = (long *)(*param_2 + lVar2 * 4);
  *plVar1 = *plVar1 + *(long *)(*param_2 + 8 + lVar2 * 4);
  return;
}

static uintptr_t run_1651660(uintptr_t *cursor, uintptr_t *state) {
    nested_01651660((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651680(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1651680(uintptr_t *cursor, uintptr_t *state) {
    nested_01651680((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016516a0(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined8 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined8 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_16516a0(uintptr_t *cursor, uintptr_t *state) {
    nested_016516a0((long *)cursor, (long *)state);
    return 0;
}

static void nested_016516d0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_16516d0(uintptr_t *cursor, uintptr_t *state) {
    nested_016516d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016516f0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_16516f0(uintptr_t *cursor, uintptr_t *state) {
    nested_016516f0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651730(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1651730(uintptr_t *cursor, uintptr_t *state) {
    nested_01651730((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651750(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1651750(uintptr_t *cursor, uintptr_t *state) {
    nested_01651750((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651770(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1651770(uintptr_t *cursor, uintptr_t *state) {
    nested_01651770((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651790(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1651790(uintptr_t *cursor, uintptr_t *state) {
    nested_01651790((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016517b0(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  sVar2 = psVar3[1];
  *param_1 = (uintptr_t)((long)(psVar3 + 2));
  lVar4 = *(long *)(psVar3 + 2);
  *param_1 = (uintptr_t)((long)(psVar3 + 6));
  lVar5 = *(long *)(psVar3 + 6);
  *param_1 = (uintptr_t)((long)(psVar3 + 10));
  *(long *)(*param_2 + (long)sVar2 * 4) = lVar4 * *(long *)(*param_2 + (long)sVar1 * 4) + lVar5;
  return;
}

static uintptr_t run_16517b0(uintptr_t *cursor, uintptr_t *state) {
    nested_016517b0((long *)cursor, (long *)state);
    return 0;
}

static void nested_016517f0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_16517f0(uintptr_t *cursor, uintptr_t *state) {
    nested_016517f0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651810(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1651810(uintptr_t *cursor, uintptr_t *state) {
    nested_01651810((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651830(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1651830(uintptr_t *cursor, uintptr_t *state) {
    nested_01651830((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651850(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  psVar5 = (short *)*param_1;
  sVar1 = *psVar5;
  *param_1 = (uintptr_t)((long)(psVar5 + 1));
  sVar2 = psVar5[1];
  *param_1 = (uintptr_t)((long)(psVar5 + 2));
  iVar3 = *(int *)(psVar5 + 2);
  *param_1 = (uintptr_t)((long)(psVar5 + 4));
  iVar4 = *(int *)(psVar5 + 4);
  *param_1 = (uintptr_t)((long)(psVar5 + 6));
  *(int *)(*param_2 + (long)sVar2 * 4) = iVar3 * *(int *)(*param_2 + (long)sVar1 * 4) + iVar4;
  return;
}

static uintptr_t run_1651850(uintptr_t *cursor, uintptr_t *state) {
    nested_01651850((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651890(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1651890(uintptr_t *cursor, uintptr_t *state) {
    nested_01651890((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016518b0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_16518b0(uintptr_t *cursor, uintptr_t *state) {
    nested_016518b0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016518d0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(ulong *)(lVar1 + 8 + lVar2 * 4) <= *(ulong *)(lVar1 + lVar2 * 4));
  return;
}

static uintptr_t run_16518d0(uintptr_t *cursor, uintptr_t *state) {
    nested_016518d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651920(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1651920(uintptr_t *cursor, uintptr_t *state) {
    nested_01651920((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651940(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(ulong *)(*param_2 + (long)sVar1 * 4) =
       (ulong)*(uint *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_1651940(uintptr_t *cursor, uintptr_t *state) {
    nested_01651940((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651970(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1651970(uintptr_t *cursor, uintptr_t *state) {
    nested_01651970((long *)cursor, (long *)state);
    return 0;
}

static void nested_016519d0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(uint *)(lVar1 + lVar2 * 4) <= *(uint *)(lVar1 + 4 + lVar2 * 4));
  return;
}

static uintptr_t run_16519d0(uintptr_t *cursor, uintptr_t *state) {
    nested_016519d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651a00(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1651a00(uintptr_t *cursor, uintptr_t *state) {
    nested_01651a00((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651a20(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1651a20(uintptr_t *cursor, uintptr_t *state) {
    nested_01651a20((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651a40(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  lVar5 = (long)*psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar1 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  lVar4 = *param_2;
  uVar2 = *(uint *)(lVar4 + lVar5 * 4);
  *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
  *(undefined1 *)(lVar4 + lVar5 * 4) = *(undefined1 *)((ulong)uVar1 + (ulong)uVar2 + param_2[1]);
  return;
}

static uintptr_t run_1651a40(uintptr_t *cursor, uintptr_t *state) {
    nested_01651a40((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651a80(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1651a80(uintptr_t *cursor, uintptr_t *state) {
    nested_01651a80((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651ac0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1651ac0(uintptr_t *cursor, uintptr_t *state) {
    nested_01651ac0((long *)cursor, (long *)state);
    return 0;
}

static ulong nested_01651ae0(undefined8 *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar3 = *param_2;
  iVar1 = *(int *)(lVar3 + lVar4 * 4);
  iVar2 = *(int *)(lVar3 + 4 + lVar4 * 4);
  *(int *)(lVar3 + lVar4 * 4) = iVar1 % iVar2;
  return (long)iVar1 / (long)iVar2 & 0xffffffff;
}

static uintptr_t run_1651ae0(uintptr_t *cursor, uintptr_t *state) {
    return (uintptr_t)nested_01651ae0((undefined8 *)cursor, (long *)state);
}

static void nested_01651b00(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1651b00(uintptr_t *cursor, uintptr_t *state) {
    nested_01651b00((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651b20(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1651b20(uintptr_t *cursor, uintptr_t *state) {
    nested_01651b20((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651b40(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1651b40(uintptr_t *cursor, uintptr_t *state) {
    nested_01651b40((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651b60(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1651b60(uintptr_t *cursor, uintptr_t *state) {
    nested_01651b60((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651b80(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1651b80(uintptr_t *cursor, uintptr_t *state) {
    nested_01651b80((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651ba0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1651ba0(uintptr_t *cursor, uintptr_t *state) {
    nested_01651ba0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651bc0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(long *)(lVar1 + lVar2 * 4) == *(long *)(lVar1 + 8 + lVar2 * 4));
  return;
}

static uintptr_t run_1651bc0(uintptr_t *cursor, uintptr_t *state) {
    nested_01651bc0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651bf0(long *param_1,long *param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar1 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  uVar2 = psVar4[1];
  *param_1 = (uintptr_t)((long)(psVar4 + 2));
  iVar3 = *(int *)(psVar4 + 2);
  *param_1 = (uintptr_t)((long)(psVar4 + 4));
  *(uint *)(*param_2 + (long)sVar1 * 4) = (uint)uVar2 * (int)param_2[2] + iVar3;
  return;
}

static uintptr_t run_1651bf0(uintptr_t *cursor, uintptr_t *state) {
    nested_01651bf0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651c30(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1651c30(uintptr_t *cursor, uintptr_t *state) {
    nested_01651c30((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651c70(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1651c70(uintptr_t *cursor, uintptr_t *state) {
    nested_01651c70((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651cb0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1651cb0(uintptr_t *cursor, uintptr_t *state) {
    nested_01651cb0((long *)cursor, (long *)state);
    return 0;
}

static ulong nested_01651cd0(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar3 = *param_2;
  uVar1 = *(uint *)(lVar3 + lVar4 * 4);
  uVar2 = *(uint *)(lVar3 + 4 + lVar4 * 4);
  *(uint *)(lVar3 + lVar4 * 4) = uVar1 % uVar2;
  return (ulong)uVar1 / (ulong)uVar2;
}

static uintptr_t run_1651cd0(uintptr_t *cursor, uintptr_t *state) {
    return (uintptr_t)nested_01651cd0((undefined8 *)cursor, (long *)state);
}

static void nested_01651cf0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1651cf0(uintptr_t *cursor, uintptr_t *state) {
    nested_01651cf0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651d10(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1651d10(uintptr_t *cursor, uintptr_t *state) {
    nested_01651d10((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651d30(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(long *)(*param_2 + (long)sVar1 * 4) =
       (long)*(char *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_1651d30(uintptr_t *cursor, uintptr_t *state) {
    nested_01651d30((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651d60(long *param_1)

{
  *param_1 = (uintptr_t)(*param_1 + 2);
  return;
}

static uintptr_t run_1651d60(uintptr_t *cursor, uintptr_t *state) {
    (void)state;
    nested_01651d60((long *)cursor);
    return 0;
}

static void nested_01651d70(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1651d70(uintptr_t *cursor, uintptr_t *state) {
    nested_01651d70((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651d90(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1651d90(uintptr_t *cursor, uintptr_t *state) {
    nested_01651d90((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651db0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1651db0(uintptr_t *cursor, uintptr_t *state) {
    nested_01651db0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651df0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1651df0(uintptr_t *cursor, uintptr_t *state) {
    nested_01651df0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651e10(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  piVar1 = (int *)(*param_2 + lVar2 * 4);
  *piVar1 = *piVar1 - *(int *)(*param_2 + 4 + lVar2 * 4);
  return;
}

static uintptr_t run_1651e10(uintptr_t *cursor, uintptr_t *state) {
    nested_01651e10((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651e30(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1651e30(uintptr_t *cursor, uintptr_t *state) {
    nested_01651e30((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651e70(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(long *)(*param_2 + (long)sVar1 * 4) =
       (long)*(short *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_1651e70(uintptr_t *cursor, uintptr_t *state) {
    nested_01651e70((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651ea0(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined1 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined1 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_1651ea0(uintptr_t *cursor, uintptr_t *state) {
    nested_01651ea0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651ed0(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar3 = *param_2;
  uVar1 = *(uint *)(lVar3 + lVar4 * 4);
  uVar2 = *(uint *)(lVar3 + 4 + lVar4 * 4);
  *(uint *)(lVar3 + lVar4 * 4) = uVar2 + uVar1 + (uVar2 & uVar1) * -2;
  return;
}

static uintptr_t run_1651ed0(uintptr_t *cursor, uintptr_t *state) {
    nested_01651ed0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651f20(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1651f20(uintptr_t *cursor, uintptr_t *state) {
    nested_01651f20((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651f40(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  psVar5 = (short *)*param_1;
  sVar1 = *psVar5;
  *param_1 = (uintptr_t)((long)(psVar5 + 1));
  sVar2 = psVar5[1];
  *param_1 = (uintptr_t)((long)(psVar5 + 2));
  iVar3 = *(int *)(psVar5 + 2);
  *param_1 = (uintptr_t)((long)(psVar5 + 4));
  iVar4 = *(int *)(psVar5 + 4);
  *param_1 = (uintptr_t)((long)(psVar5 + 6));
  *(int *)(*param_2 + (long)sVar2 * 4) = iVar3 * *(int *)(*param_2 + (long)sVar1 * 4) + iVar4;
  return;
}

static uintptr_t run_1651f40(uintptr_t *cursor, uintptr_t *state) {
    nested_01651f40((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651f80(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1651f80(uintptr_t *cursor, uintptr_t *state) {
    nested_01651f80((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651fa0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  *(ulong *)(*param_2 + lVar1 * 4) = (ulong)*(uint *)(*param_2 + lVar1 * 4);
  return;
}

static uintptr_t run_1651fa0(uintptr_t *cursor, uintptr_t *state) {
    nested_01651fa0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01651fc0(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined2 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined2 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_1651fc0(uintptr_t *cursor, uintptr_t *state) {
    nested_01651fc0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01651ff0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1651ff0(uintptr_t *cursor, uintptr_t *state) {
    nested_01651ff0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652030(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  plVar1 = (long *)(*param_2 + lVar2 * 4);
  *plVar1 = *plVar1 << (*(byte *)(*param_2 + 8 + lVar2 * 4) & 0x3f);
  return;
}

static uintptr_t run_1652030(uintptr_t *cursor, uintptr_t *state) {
    nested_01652030((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652050(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1652050(uintptr_t *cursor, uintptr_t *state) {
    nested_01652050((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016520b0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) = *(uint *)(lVar1 + lVar2 * 4) / *(uint *)(lVar1 + 4 + lVar2 * 4);
  return;
}

static uintptr_t run_16520b0(uintptr_t *cursor, uintptr_t *state) {
    nested_016520b0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016520d0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(int *)(lVar1 + lVar2 * 4) < *(int *)(lVar1 + 4 + lVar2 * 4));
  return;
}

static uintptr_t run_16520d0(uintptr_t *cursor, uintptr_t *state) {
    nested_016520d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652100(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined4 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined4 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_1652100(uintptr_t *cursor, uintptr_t *state) {
    nested_01652100((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652130(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1652130(uintptr_t *cursor, uintptr_t *state) {
    nested_01652130((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652150(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1652150(uintptr_t *cursor, uintptr_t *state) {
    nested_01652150((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652170(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(long *)(lVar1 + lVar2 * 4) != *(long *)(lVar1 + 8 + lVar2 * 4));
  return;
}

static uintptr_t run_1652170(uintptr_t *cursor, uintptr_t *state) {
    nested_01652170((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016521c0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_16521c0(uintptr_t *cursor, uintptr_t *state) {
    nested_016521c0((long *)cursor, (long *)state);
    return 0;
}

static void nested_016521e0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(ulong *)(lVar1 + 8 + lVar2 * 4) < *(ulong *)(lVar1 + lVar2 * 4));
  return;
}

static uintptr_t run_16521e0(uintptr_t *cursor, uintptr_t *state) {
    nested_016521e0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652210(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1652210(uintptr_t *cursor, uintptr_t *state) {
    nested_01652210((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652230(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1652230(uintptr_t *cursor, uintptr_t *state) {
    nested_01652230((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652250(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  *(uint *)(*param_2 + lVar1 * 4) = (uint)(*(long *)(*param_2 + lVar1 * 4) == 0);
  return;
}

static uintptr_t run_1652250(uintptr_t *cursor, uintptr_t *state) {
    nested_01652250((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652290(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1652290(uintptr_t *cursor, uintptr_t *state) {
    nested_01652290((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016522b0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_16522b0(uintptr_t *cursor, uintptr_t *state) {
    nested_016522b0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016522d0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_16522d0(uintptr_t *cursor, uintptr_t *state) {
    nested_016522d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652310(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  lVar5 = (long)*psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar1 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  lVar4 = *param_2;
  uVar2 = *(uint *)(lVar4 + lVar5 * 4);
  *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
  *(undefined1 *)(lVar4 + lVar5 * 4) = *(undefined1 *)((ulong)uVar1 + (ulong)uVar2 + param_2[1]);
  *(int *)(*param_2 + lVar5 * 4) = (int)*(char *)(*param_2 + lVar5 * 4);
  return;
}

static uintptr_t run_1652310(uintptr_t *cursor, uintptr_t *state) {
    nested_01652310((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652350(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1652350(uintptr_t *cursor, uintptr_t *state) {
    nested_01652350((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652370(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  uVar2 = *(ulong *)(lVar1 + lVar4 * 4);
  uVar3 = *(ulong *)(lVar1 + 8 + lVar4 * 4);
  if ((uVar2 | uVar3) >> 0x20 == 0) {
    *(ulong *)(lVar1 + lVar4 * 4) = (uVar2 & 0xffffffff) / (uVar3 & 0xffffffff);
    return;
  }
  *(long *)(lVar1 + lVar4 * 4) = (long)uVar2 / (long)uVar3;
  return;
}

static uintptr_t run_1652370(uintptr_t *cursor, uintptr_t *state) {
    nested_01652370((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016523b0(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  piVar1 = (int *)(*param_2 + lVar2 * 4);
  *piVar1 = *piVar1 << (*(byte *)(*param_2 + 4 + lVar2 * 4) & 0x1f);
  return;
}

static uintptr_t run_16523b0(uintptr_t *cursor, uintptr_t *state) {
    nested_016523b0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016523d0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_16523d0(uintptr_t *cursor, uintptr_t *state) {
    nested_016523d0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652410(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  *(uint *)(*param_2 + lVar1 * 4) = (uint)(*(int *)(*param_2 + lVar1 * 4) == 0);
  return;
}

static uintptr_t run_1652410(uintptr_t *cursor, uintptr_t *state) {
    nested_01652410((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652430(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1652430(uintptr_t *cursor, uintptr_t *state) {
    nested_01652430((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652450(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1652450(uintptr_t *cursor, uintptr_t *state) {
    nested_01652450((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652470(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1652470(uintptr_t *cursor, uintptr_t *state) {
    nested_01652470((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652490(long *param_1,long *param_2)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(undefined4 *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined4 *)(*param_2 + (long)sVar1 * 4) = uVar2;
  return;
}

static uintptr_t run_1652490(uintptr_t *cursor, uintptr_t *state) {
    nested_01652490((long *)cursor, (long *)state);
    return 0;
}

static void nested_016524b0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_16524b0(uintptr_t *cursor, uintptr_t *state) {
    nested_016524b0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016524d0(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (ulong *)(*param_2 + lVar2 * 4);
  *puVar1 = *puVar1 >> (*(byte *)(*param_2 + 8 + lVar2 * 4) & 0x3f);
  return;
}

static uintptr_t run_16524d0(uintptr_t *cursor, uintptr_t *state) {
    nested_016524d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016524f0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_16524f0(uintptr_t *cursor, uintptr_t *state) {
    nested_016524f0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652510(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  *(long *)(*param_2 + lVar1 * 4) = (long)*(int *)(*param_2 + lVar1 * 4);
  return;
}

static uintptr_t run_1652510(uintptr_t *cursor, uintptr_t *state) {
    nested_01652510((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652580(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(ulong *)(lVar1 + lVar2 * 4) < *(ulong *)(lVar1 + 8 + lVar2 * 4));
  return;
}

static uintptr_t run_1652580(uintptr_t *cursor, uintptr_t *state) {
    nested_01652580((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016525b0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_16525b0(uintptr_t *cursor, uintptr_t *state) {
    nested_016525b0((long *)cursor, (long *)state);
    return 0;
}

static void nested_016525f0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_16525f0(uintptr_t *cursor, uintptr_t *state) {
    nested_016525f0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652610(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1652610(uintptr_t *cursor, uintptr_t *state) {
    nested_01652610((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652630(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1652630(uintptr_t *cursor, uintptr_t *state) {
    nested_01652630((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652650(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1652650(uintptr_t *cursor, uintptr_t *state) {
    nested_01652650((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652670(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1652670(uintptr_t *cursor, uintptr_t *state) {
    nested_01652670((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652690(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1652690(uintptr_t *cursor, uintptr_t *state) {
    nested_01652690((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016526b0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_16526b0(uintptr_t *cursor, uintptr_t *state) {
    nested_016526b0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016526d0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(ulong *)(lVar1 + lVar2 * 4) <= *(ulong *)(lVar1 + 8 + lVar2 * 4));
  return;
}

static uintptr_t run_16526d0(uintptr_t *cursor, uintptr_t *state) {
    nested_016526d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652700(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1652700(uintptr_t *cursor, uintptr_t *state) {
    nested_01652700((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652720(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1652720(uintptr_t *cursor, uintptr_t *state) {
    nested_01652720((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652740(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1652740(uintptr_t *cursor, uintptr_t *state) {
    nested_01652740((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652760(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  uVar2 = *(ulong *)(lVar1 + lVar4 * 4);
  uVar3 = *(ulong *)(lVar1 + 8 + lVar4 * 4);
  *(ulong *)(lVar1 + lVar4 * 4) = uVar3 + uVar2 + (uVar3 & uVar2) * -2;
  return;
}

static uintptr_t run_1652760(uintptr_t *cursor, uintptr_t *state) {
    nested_01652760((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652790(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1652790(uintptr_t *cursor, uintptr_t *state) {
    nested_01652790((long *)cursor, (long *)state);
    return 0;
}

static void nested_016527b0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_16527b0(uintptr_t *cursor, uintptr_t *state) {
    nested_016527b0((undefined8 *)cursor, (long *)state);
    return 0;
}

static ulong nested_016527d0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  uVar2 = *(ulong *)(lVar1 + lVar4 * 4);
  uVar3 = *(ulong *)(lVar1 + 8 + lVar4 * 4);
  if ((uVar2 | uVar3) >> 0x20 == 0) {
    *(ulong *)(lVar1 + lVar4 * 4) = (uVar2 & 0xffffffff) % (uVar3 & 0xffffffff);
    return (uVar2 & 0xffffffff) / (uVar3 & 0xffffffff);
  }
  *(long *)(lVar1 + lVar4 * 4) = (long)uVar2 % (long)uVar3;
  return (long)uVar2 / (long)uVar3;
}

static uintptr_t run_16527d0(uintptr_t *cursor, uintptr_t *state) {
    return (uintptr_t)nested_016527d0((undefined8 *)cursor, (long *)state);
}

static void nested_01652810(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1652810(uintptr_t *cursor, uintptr_t *state) {
    nested_01652810((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652830(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (ulong *)(*param_2 + lVar3 * 4);
  bVar2 = *(byte *)(*param_2 + 8 + lVar3 * 4) & 0x3f;
  *puVar1 =rol64(*puVar1, bVar2);
  return;
}

static uintptr_t run_1652830(uintptr_t *cursor, uintptr_t *state) {
    nested_01652830((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652850(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(ulong *)(*param_2 + (long)sVar1 * 4) =
       (ulong)*(ushort *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_1652850(uintptr_t *cursor, uintptr_t *state) {
    nested_01652850((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652880(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1652880(uintptr_t *cursor, uintptr_t *state) {
    nested_01652880((long *)cursor, (long *)state);
    return 0;
}

static void nested_016528d0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  lVar5 = (long)*psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar1 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  lVar4 = *param_2;
  uVar2 = *(uint *)(lVar4 + lVar5 * 4);
  *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
  *(undefined4 *)(lVar4 + lVar5 * 4) = *(undefined4 *)((ulong)uVar1 + (ulong)uVar2 + param_2[1]);
  return;
}

static uintptr_t run_16528d0(uintptr_t *cursor, uintptr_t *state) {
    nested_016528d0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652900(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + lVar2 * 4);
  *puVar1 = *puVar1 >> (*(byte *)(*param_2 + 4 + lVar2 * 4) & 0x1f);
  return;
}

static uintptr_t run_1652900(uintptr_t *cursor, uintptr_t *state) {
    nested_01652900((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652920(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1652920(uintptr_t *cursor, uintptr_t *state) {
    nested_01652920((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652940(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1652940(uintptr_t *cursor, uintptr_t *state) {
    nested_01652940((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652980(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1652980(uintptr_t *cursor, uintptr_t *state) {
    nested_01652980((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_016529a0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_16529a0(uintptr_t *cursor, uintptr_t *state) {
    nested_016529a0((long *)cursor, (long *)state);
    return 0;
}

static void nested_016529c0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_16529c0(uintptr_t *cursor, uintptr_t *state) {
    nested_016529c0((long *)cursor, (long *)state);
    return 0;
}

static void nested_016529e0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_16529e0(uintptr_t *cursor, uintptr_t *state) {
    nested_016529e0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652a00(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1652a00(uintptr_t *cursor, uintptr_t *state) {
    nested_01652a00((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652a20(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1652a20(uintptr_t *cursor, uintptr_t *state) {
    nested_01652a20((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652a40(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1652a40(uintptr_t *cursor, uintptr_t *state) {
    nested_01652a40((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652a60(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1652a60(uintptr_t *cursor, uintptr_t *state) {
    nested_01652a60((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652a80(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1652a80(uintptr_t *cursor, uintptr_t *state) {
    nested_01652a80((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652aa0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1652aa0(uintptr_t *cursor, uintptr_t *state) {
    nested_01652aa0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652ac0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(uint *)(lVar1 + 4 + lVar2 * 4) < *(uint *)(lVar1 + lVar2 * 4));
  return;
}

static uintptr_t run_1652ac0(uintptr_t *cursor, uintptr_t *state) {
    nested_01652ac0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652af0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(uint *)(lVar1 + 4 + lVar2 * 4) <= *(uint *)(lVar1 + lVar2 * 4));
  return;
}

static uintptr_t run_1652af0(uintptr_t *cursor, uintptr_t *state) {
    nested_01652af0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652b20(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(long *)(lVar1 + 8 + lVar2 * 4) < *(long *)(lVar1 + lVar2 * 4));
  return;
}

static uintptr_t run_1652b20(uintptr_t *cursor, uintptr_t *state) {
    nested_01652b20((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652b50(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1652b50(uintptr_t *cursor, uintptr_t *state) {
    nested_01652b50((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652b70(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1652b70(uintptr_t *cursor, uintptr_t *state) {
    nested_01652b70((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652b90(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1652b90(uintptr_t *cursor, uintptr_t *state) {
    nested_01652b90((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652bb0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1652bb0(uintptr_t *cursor, uintptr_t *state) {
    nested_01652bb0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652bd0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1652bd0(uintptr_t *cursor, uintptr_t *state) {
    nested_01652bd0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652bf0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1652bf0(uintptr_t *cursor, uintptr_t *state) {
    nested_01652bf0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652c10(long *param_1,long *param_2)

{
  short sVar1;
  short *psVar2;
  undefined8 uVar3;
  
  psVar2 = (short *)*param_1;
  sVar1 = *psVar2;
  *param_1 = (uintptr_t)((long)(psVar2 + 1));
  uVar3 = *(undefined8 *)(psVar2 + 1);
  *param_1 = (uintptr_t)((long)(psVar2 + 5));
  *(undefined8 *)(*param_2 + (long)sVar1 * 4) = uVar3;
  return;
}

static uintptr_t run_1652c10(uintptr_t *cursor, uintptr_t *state) {
    nested_01652c10((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652c40(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  lVar5 = (long)*psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar1 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  lVar4 = *param_2;
  uVar2 = *(uint *)(lVar4 + lVar5 * 4);
  *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
  *(undefined2 *)(lVar4 + lVar5 * 4) = *(undefined2 *)((ulong)uVar1 + (ulong)uVar2 + param_2[1]);
  *(int *)(*param_2 + lVar5 * 4) = (int)*(short *)(*param_2 + lVar5 * 4);
  return;
}

static uintptr_t run_1652c40(uintptr_t *cursor, uintptr_t *state) {
    nested_01652c40((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652c80(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1652c80(uintptr_t *cursor, uintptr_t *state) {
    nested_01652c80((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652ca0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1652ca0(uintptr_t *cursor, uintptr_t *state) {
    nested_01652ca0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652cc0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_1652cc0(uintptr_t *cursor, uintptr_t *state) {
    nested_01652cc0((long *)cursor, (long *)state);
    return 0;
}

static void nested_01652ce0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  plVar1 = (long *)(*param_2 + lVar2 * 4);
  *plVar1 = *plVar1 - *(long *)(*param_2 + 8 + lVar2 * 4);
  return;
}

static uintptr_t run_1652ce0(uintptr_t *cursor, uintptr_t *state) {
    nested_01652ce0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652d00(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_1652d00(uintptr_t *cursor, uintptr_t *state) {
    nested_01652d00((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652d20(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_1652d20(uintptr_t *cursor, uintptr_t *state) {
    nested_01652d20((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652d40(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_1652d40(uintptr_t *cursor, uintptr_t *state) {
    nested_01652d40((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652d60(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(int *)(lVar1 + lVar2 * 4) <= *(int *)(lVar1 + 4 + lVar2 * 4));
  return;
}

static uintptr_t run_1652d60(uintptr_t *cursor, uintptr_t *state) {
    nested_01652d60((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_01652d90(long *param_1,long *param_2)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(undefined4 *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined4 *)(*param_2 + (long)sVar1 * 4) = uVar2;
  return;
}

static uintptr_t run_1652d90(uintptr_t *cursor, uintptr_t *state) {
    nested_01652d90((long *)cursor, (long *)state);
    return 0;
}

static void nested_025ad910(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  *(ulong *)(*param_2 + lVar1 * 4) = (ulong)*(uint *)(*param_2 + lVar1 * 4);
  return;
}

static uintptr_t run_25ad910(uintptr_t *cursor, uintptr_t *state) {
    nested_025ad910((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025ad9e0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_25ad9e0(uintptr_t *cursor, uintptr_t *state) {
    nested_025ad9e0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025adb60(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_25adb60(uintptr_t *cursor, uintptr_t *state) {
    nested_025adb60((long *)cursor, (long *)state);
    return 0;
}

static void nested_025adc10(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_25adc10(uintptr_t *cursor, uintptr_t *state) {
    nested_025adc10((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025adc70(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + lVar2 * 4);
  *puVar1 = *puVar1 >> (*(byte *)(*param_2 + 4 + lVar2 * 4) & 0x1f);
  return;
}

static uintptr_t run_25adc70(uintptr_t *cursor, uintptr_t *state) {
    nested_025adc70((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025adc90(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_25adc90(uintptr_t *cursor, uintptr_t *state) {
    nested_025adc90((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025adcf0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_25adcf0(uintptr_t *cursor, uintptr_t *state) {
    nested_025adcf0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025adfb0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_25adfb0(uintptr_t *cursor, uintptr_t *state) {
    nested_025adfb0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025ae0a0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_25ae0a0(uintptr_t *cursor, uintptr_t *state) {
    nested_025ae0a0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025ae0e0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_25ae0e0(uintptr_t *cursor, uintptr_t *state) {
    nested_025ae0e0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025ae140(long *param_1,long *param_2)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(undefined4 *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined4 *)(*param_2 + (long)sVar1 * 4) = uVar2;
  return;
}

static uintptr_t run_25ae140(uintptr_t *cursor, uintptr_t *state) {
    nested_025ae140((long *)cursor, (long *)state);
    return 0;
}

static void nested_025ae1c0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  lVar5 = (long)*psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar1 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  lVar4 = *param_2;
  uVar2 = *(uint *)(lVar4 + lVar5 * 4);
  *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
  *(undefined1 *)(lVar4 + lVar5 * 4) = *(undefined1 *)((ulong)uVar1 + (ulong)uVar2 + param_2[1]);
  return;
}

static uintptr_t run_25ae1c0(uintptr_t *cursor, uintptr_t *state) {
    nested_025ae1c0((long *)cursor, (long *)state);
    return 0;
}

static void nested_025ae200(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_25ae200(uintptr_t *cursor, uintptr_t *state) {
    nested_025ae200((long *)cursor, (long *)state);
    return 0;
}

static void nested_025ae220(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  lVar5 = (long)*psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar1 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  lVar4 = *param_2;
  uVar2 = *(uint *)(lVar4 + lVar5 * 4);
  *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
  *(undefined1 *)(lVar4 + lVar5 * 4) = *(undefined1 *)((ulong)uVar1 + (ulong)uVar2 + param_2[1]);
  *(int *)(*param_2 + lVar5 * 4) = (int)*(char *)(*param_2 + lVar5 * 4);
  return;
}

static uintptr_t run_25ae220(uintptr_t *cursor, uintptr_t *state) {
    nested_025ae220((long *)cursor, (long *)state);
    return 0;
}

static void nested_025ae2f0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_25ae2f0(uintptr_t *cursor, uintptr_t *state) {
    nested_025ae2f0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025ae360(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  psVar5 = (short *)*param_1;
  sVar1 = *psVar5;
  *param_1 = (uintptr_t)((long)(psVar5 + 1));
  sVar2 = psVar5[1];
  *param_1 = (uintptr_t)((long)(psVar5 + 2));
  iVar3 = *(int *)(psVar5 + 2);
  *param_1 = (uintptr_t)((long)(psVar5 + 4));
  iVar4 = *(int *)(psVar5 + 4);
  *param_1 = (uintptr_t)((long)(psVar5 + 6));
  *(int *)(*param_2 + (long)sVar1 * 4) = iVar3 * *(int *)(*param_2 + (long)sVar2 * 4) + iVar4;
  return;
}

static uintptr_t run_25ae360(uintptr_t *cursor, uintptr_t *state) {
    nested_025ae360((long *)cursor, (long *)state);
    return 0;
}

static void nested_025ae540(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(long *)(*param_2 + (long)sVar1 * 4) =
       (long)*(char *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_25ae540(uintptr_t *cursor, uintptr_t *state) {
    nested_025ae540((long *)cursor, (long *)state);
    return 0;
}

static void nested_025ae700(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_25ae700(uintptr_t *cursor, uintptr_t *state) {
    nested_025ae700((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025ae9a0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_25ae9a0(uintptr_t *cursor, uintptr_t *state) {
    nested_025ae9a0((long *)cursor, (long *)state);
    return 0;
}

static void nested_025aea00(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  uVar2 = *(ulong *)(lVar1 + lVar4 * 4);
  uVar3 = *(ulong *)(lVar1 + 8 + lVar4 * 4);
  *(ulong *)(lVar1 + lVar4 * 4) = uVar2 + uVar3 + (uVar2 & uVar3) * -2;
  return;
}

static uintptr_t run_25aea00(uintptr_t *cursor, uintptr_t *state) {
    nested_025aea00((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025aeaf0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_25aeaf0(uintptr_t *cursor, uintptr_t *state) {
    nested_025aeaf0((long *)cursor, (long *)state);
    return 0;
}

static void nested_025aeb80(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(long *)(lVar1 + 8 + lVar2 * 4) < *(long *)(lVar1 + lVar2 * 4));
  return;
}

static uintptr_t run_25aeb80(uintptr_t *cursor, uintptr_t *state) {
    nested_025aeb80((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025aed20(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_25aed20(uintptr_t *cursor, uintptr_t *state) {
    nested_025aed20((long *)cursor, (long *)state);
    return 0;
}

static void nested_025aef70(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_25aef70(uintptr_t *cursor, uintptr_t *state) {
    nested_025aef70((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025aef90(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_25aef90(uintptr_t *cursor, uintptr_t *state) {
    nested_025aef90((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025af040(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_25af040(uintptr_t *cursor, uintptr_t *state) {
    nested_025af040((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025af180(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_25af180(uintptr_t *cursor, uintptr_t *state) {
    nested_025af180((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025af1a0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + lVar2 * 4);
  *puVar1 = *puVar1 & *(uint *)(*param_2 + 4 + lVar2 * 4);
  return;
}

static uintptr_t run_25af1a0(uintptr_t *cursor, uintptr_t *state) {
    nested_025af1a0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025af3a0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_25af3a0(uintptr_t *cursor, uintptr_t *state) {
    nested_025af3a0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025af3c0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_25af3c0(uintptr_t *cursor, uintptr_t *state) {
    nested_025af3c0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025af4f0(long *param_1,long *param_2)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(undefined4 *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined4 *)(*param_2 + (long)sVar1 * 4) = uVar2;
  return;
}

static uintptr_t run_25af4f0(uintptr_t *cursor, uintptr_t *state) {
    nested_025af4f0((long *)cursor, (long *)state);
    return 0;
}

static void nested_025afa10(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  psVar5 = (short *)*param_1;
  sVar1 = *psVar5;
  *param_1 = (uintptr_t)((long)(psVar5 + 1));
  sVar2 = psVar5[1];
  *param_1 = (uintptr_t)((long)(psVar5 + 2));
  iVar3 = *(int *)(psVar5 + 2);
  *param_1 = (uintptr_t)((long)(psVar5 + 4));
  iVar4 = *(int *)(psVar5 + 4);
  *param_1 = (uintptr_t)((long)(psVar5 + 6));
  *(int *)(*param_2 + (long)sVar2 * 4) = iVar3 * *(int *)(*param_2 + (long)sVar1 * 4) + iVar4;
  return;
}

static uintptr_t run_25afa10(uintptr_t *cursor, uintptr_t *state) {
    nested_025afa10((long *)cursor, (long *)state);
    return 0;
}

static void nested_025afa50(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(long *)(*param_2 + (long)sVar1 * 4) =
       (long)*(short *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_25afa50(uintptr_t *cursor, uintptr_t *state) {
    nested_025afa50((long *)cursor, (long *)state);
    return 0;
}

static void nested_025afae0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_25afae0(uintptr_t *cursor, uintptr_t *state) {
    nested_025afae0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025afb00(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_25afb00(uintptr_t *cursor, uintptr_t *state) {
    nested_025afb00((undefined8 *)cursor, (long *)state);
    return 0;
}

static ulong nested_025afca0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  uVar2 = *(ulong *)(lVar1 + lVar4 * 4);
  uVar3 = *(ulong *)(lVar1 + 8 + lVar4 * 4);
  if ((uVar2 | uVar3) >> 0x20 == 0) {
    *(ulong *)(lVar1 + lVar4 * 4) = (uVar2 & 0xffffffff) % (uVar3 & 0xffffffff);
    return (uVar2 & 0xffffffff) / (uVar3 & 0xffffffff);
  }
  *(long *)(lVar1 + lVar4 * 4) = (long)uVar2 % (long)uVar3;
  return (long)uVar2 / (long)uVar3;
}

static uintptr_t run_25afca0(uintptr_t *cursor, uintptr_t *state) {
    return (uintptr_t)nested_025afca0((undefined8 *)cursor, (long *)state);
}

static void nested_025afd40(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined2 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined2 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_25afd40(uintptr_t *cursor, uintptr_t *state) {
    nested_025afd40((long *)cursor, (long *)state);
    return 0;
}

static void nested_025afd70(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  *(ulong *)(*param_2 + lVar1 * 4) = (ulong)*(uint *)(*param_2 + lVar1 * 4);
  return;
}

static uintptr_t run_25afd70(uintptr_t *cursor, uintptr_t *state) {
    nested_025afd70((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025afd90(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + lVar2 * 4);
  *puVar1 = *puVar1 | *(uint *)(*param_2 + 4 + lVar2 * 4);
  return;
}

static uintptr_t run_25afd90(uintptr_t *cursor, uintptr_t *state) {
    nested_025afd90((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025afe10(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined4 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined4 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_25afe10(uintptr_t *cursor, uintptr_t *state) {
    nested_025afe10((long *)cursor, (long *)state);
    return 0;
}

static void nested_025afe40(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_25afe40(uintptr_t *cursor, uintptr_t *state) {
    nested_025afe40((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025afe60(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_25afe60(uintptr_t *cursor, uintptr_t *state) {
    nested_025afe60((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025afe80(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_25afe80(uintptr_t *cursor, uintptr_t *state) {
    nested_025afe80((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025afea0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_25afea0(uintptr_t *cursor, uintptr_t *state) {
    nested_025afea0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025affe0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_25affe0(uintptr_t *cursor, uintptr_t *state) {
    nested_025affe0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b00d0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + lVar2 * 4);
  *puVar1 = *puVar1 >> (*(byte *)(*param_2 + 4 + lVar2 * 4) & 0x1f);
  return;
}

static uintptr_t run_25b00d0(uintptr_t *cursor, uintptr_t *state) {
    nested_025b00d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b00f0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_25b00f0(uintptr_t *cursor, uintptr_t *state) {
    nested_025b00f0((long *)cursor, (long *)state);
    return 0;
}

static void nested_025b0130(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_25b0130(uintptr_t *cursor, uintptr_t *state) {
    nested_025b0130((long *)cursor, (long *)state);
    return 0;
}

static void nested_025b0150(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_25b0150(uintptr_t *cursor, uintptr_t *state) {
    nested_025b0150((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b0210(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined2 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined2 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_25b0210(uintptr_t *cursor, uintptr_t *state) {
    nested_025b0210((long *)cursor, (long *)state);
    return 0;
}

static void nested_025b0430(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_25b0430(uintptr_t *cursor, uintptr_t *state) {
    nested_025b0430((long *)cursor, (long *)state);
    return 0;
}

static void nested_025b0500(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_25b0500(uintptr_t *cursor, uintptr_t *state) {
    nested_025b0500((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b05a0(long *param_1,long *param_2)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(undefined4 *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined4 *)(*param_2 + (long)sVar1 * 4) = uVar2;
  return;
}

static uintptr_t run_25b05a0(uintptr_t *cursor, uintptr_t *state) {
    nested_025b05a0((long *)cursor, (long *)state);
    return 0;
}

static void nested_025b0620(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  lVar5 = (long)*psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar1 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  lVar4 = *param_2;
  uVar2 = *(uint *)(lVar4 + lVar5 * 4);
  *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
  *(undefined1 *)(lVar4 + lVar5 * 4) = *(undefined1 *)((ulong)uVar1 + (ulong)uVar2 + param_2[1]);
  return;
}

static uintptr_t run_25b0620(uintptr_t *cursor, uintptr_t *state) {
    nested_025b0620((long *)cursor, (long *)state);
    return 0;
}

static void nested_025b0660(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_25b0660(uintptr_t *cursor, uintptr_t *state) {
    nested_025b0660((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b0680(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  
  psVar3 = (short *)*param_1;
  lVar5 = (long)*psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar1 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  lVar4 = *param_2;
  uVar2 = *(uint *)(lVar4 + lVar5 * 4);
  *(undefined4 *)(lVar4 + lVar5 * 4) = 0;
  *(undefined1 *)(lVar4 + lVar5 * 4) = *(undefined1 *)((ulong)uVar1 + (ulong)uVar2 + param_2[1]);
  *(int *)(*param_2 + lVar5 * 4) = (int)*(char *)(*param_2 + lVar5 * 4);
  return;
}

static uintptr_t run_25b0680(uintptr_t *cursor, uintptr_t *state) {
    nested_025b0680((long *)cursor, (long *)state);
    return 0;
}

static void nested_025b0750(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_25b0750(uintptr_t *cursor, uintptr_t *state) {
    nested_025b0750((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b07c0(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  psVar5 = (short *)*param_1;
  sVar1 = *psVar5;
  *param_1 = (uintptr_t)((long)(psVar5 + 1));
  sVar2 = psVar5[1];
  *param_1 = (uintptr_t)((long)(psVar5 + 2));
  iVar3 = *(int *)(psVar5 + 2);
  *param_1 = (uintptr_t)((long)(psVar5 + 4));
  iVar4 = *(int *)(psVar5 + 4);
  *param_1 = (uintptr_t)((long)(psVar5 + 6));
  *(int *)(*param_2 + (long)sVar1 * 4) = iVar3 * *(int *)(*param_2 + (long)sVar2 * 4) + iVar4;
  return;
}

static uintptr_t run_25b07c0(uintptr_t *cursor, uintptr_t *state) {
    nested_025b07c0((long *)cursor, (long *)state);
    return 0;
}

static ulong nested_025b0960(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  uVar2 = *(ulong *)(lVar1 + lVar4 * 4);
  uVar3 = *(ulong *)(lVar1 + 8 + lVar4 * 4);
  if ((uVar2 | uVar3) >> 0x20 == 0) {
    *(ulong *)(lVar1 + lVar4 * 4) = (uVar2 & 0xffffffff) % (uVar3 & 0xffffffff);
    return (uVar2 & 0xffffffff) / (uVar3 & 0xffffffff);
  }
  *(ulong *)(lVar1 + lVar4 * 4) = uVar2 % uVar3;
  return uVar2 / uVar3;
}

static uintptr_t run_25b0960(uintptr_t *cursor, uintptr_t *state) {
    return (uintptr_t)nested_025b0960((undefined8 *)cursor, (long *)state);
}

static void nested_025b0a70(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined8 *)(*param_2 + (long)sVar1 * 4) =
       *(undefined8 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_25b0a70(uintptr_t *cursor, uintptr_t *state) {
    nested_025b0a70((long *)cursor, (long *)state);
    return 0;
}

static void nested_025b0ce0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(int *)(lVar1 + lVar2 * 4) < *(int *)(lVar1 + 4 + lVar2 * 4));
  return;
}

static uintptr_t run_25b0ce0(uintptr_t *cursor, uintptr_t *state) {
    nested_025b0ce0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b0e00(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_25b0e00(uintptr_t *cursor, uintptr_t *state) {
    nested_025b0e00((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b0fe0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(long *)(lVar1 + 8 + lVar2 * 4) < *(long *)(lVar1 + lVar2 * 4));
  return;
}

static uintptr_t run_25b0fe0(uintptr_t *cursor, uintptr_t *state) {
    nested_025b0fe0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b1150(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(uint *)(lVar1 + lVar2 * 4) =
       (uint)(*(int *)(lVar1 + lVar2 * 4) == *(int *)(lVar1 + 4 + lVar2 * 4));
  return;
}

static uintptr_t run_25b1150(uintptr_t *cursor, uintptr_t *state) {
    nested_025b1150((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b13d0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_25b13d0(uintptr_t *cursor, uintptr_t *state) {
    nested_025b13d0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b15e0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_25b15e0(uintptr_t *cursor, uintptr_t *state) {
    nested_025b15e0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b16a0(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_25b16a0(uintptr_t *cursor, uintptr_t *state) {
    nested_025b16a0((long *)cursor, (long *)state);
    return 0;
}

static void nested_025b1710(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  *(long *)(*param_2 + lVar1 * 4) = (long)*(int *)(*param_2 + lVar1 * 4);
  return;
}

static uintptr_t run_25b1710(uintptr_t *cursor, uintptr_t *state) {
    nested_025b1710((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b17e0(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = *puVar1 ^ *(uint *)(param_2 + 2);
  return;
}

static uintptr_t run_25b17e0(uintptr_t *cursor, uintptr_t *state) {
    nested_025b17e0((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b1800(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 = ~*puVar1;
  return;
}

static uintptr_t run_25b1800(uintptr_t *cursor, uintptr_t *state) {
    nested_025b1800((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b1950(long *param_1,long *param_2)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(undefined4 *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined4 *)(*param_2 + (long)sVar1 * 4) = uVar2;
  return;
}

static uintptr_t run_25b1950(uintptr_t *cursor, uintptr_t *state) {
    nested_025b1950((long *)cursor, (long *)state);
    return 0;
}

static void nested_025b1a70(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)*(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  lVar1 = *param_2;
  *(undefined4 *)(lVar1 + lVar2 * 4) =
       *(undefined4 *)(lVar1 + lVar2 * 4 + (ulong)(*(int *)(lVar1 + 8 + lVar2 * 4) == 0) * 4);
  return;
}

static uintptr_t run_25b1a70(uintptr_t *cursor, uintptr_t *state) {
    nested_025b1a70((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b1e70(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  psVar5 = (short *)*param_1;
  sVar1 = *psVar5;
  *param_1 = (uintptr_t)((long)(psVar5 + 1));
  sVar2 = psVar5[1];
  *param_1 = (uintptr_t)((long)(psVar5 + 2));
  iVar3 = *(int *)(psVar5 + 2);
  *param_1 = (uintptr_t)((long)(psVar5 + 4));
  iVar4 = *(int *)(psVar5 + 4);
  *param_1 = (uintptr_t)((long)(psVar5 + 6));
  *(int *)(*param_2 + (long)sVar2 * 4) = iVar3 * *(int *)(*param_2 + (long)sVar1 * 4) + iVar4;
  return;
}

static uintptr_t run_25b1e70(uintptr_t *cursor, uintptr_t *state) {
    nested_025b1e70((long *)cursor, (long *)state);
    return 0;
}

static void nested_025b1eb0(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(long *)(*param_2 + (long)sVar1 * 4) =
       (long)*(short *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]);
  return;
}

static uintptr_t run_25b1eb0(uintptr_t *cursor, uintptr_t *state) {
    nested_025b1eb0((long *)cursor, (long *)state);
    return 0;
}

static void nested_025b2160(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  short sVar2;
  
  sVar2 = *(short *)*param_1;
  *param_1 = (uintptr_t)((short *)*param_1 + 1);
  puVar1 = (uint *)(*param_2 + (long)sVar2 * 4);
  *puVar1 =rol32(*puVar1, *(byte *)(param_2 + 2) & 0x1f);
  return;
}

static uintptr_t run_25b2160(uintptr_t *cursor, uintptr_t *state) {
    nested_025b2160((undefined8 *)cursor, (long *)state);
    return 0;
}

static void nested_025b2180(long *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = (short *)*param_1;
  sVar2 = *psVar4;
  *param_1 = (uintptr_t)((long)(psVar4 + 1));
  iVar3 = *(int *)(psVar4 + 1);
  *param_1 = (uintptr_t)((long)(psVar4 + 3));
  piVar1 = (int *)(*param_2 + (long)sVar2 * 4);
  *piVar1 = *piVar1 + iVar3;
  return;
}

static uintptr_t run_25b2180(uintptr_t *cursor, uintptr_t *state) {
    nested_025b2180((long *)cursor, (long *)state);
    return 0;
}

static void nested_025b21a0(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  *param_1 = (uintptr_t)((long)(psVar3 + 1));
  uVar2 = *(uint *)(psVar3 + 1);
  *param_1 = (uintptr_t)((long)(psVar3 + 3));
  *(undefined2 *)((ulong)uVar2 + (ulong)*(uint *)(*param_2 + (long)sVar1 * 4) + param_2[1]) =
       *(undefined2 *)(*param_2 + 4 + (long)sVar1 * 4);
  return;
}

static uintptr_t run_25b21a0(uintptr_t *cursor, uintptr_t *state) {
    nested_025b21a0((long *)cursor, (long *)state);
    return 0;
}

typedef uintptr_t (*nested_handler)(uintptr_t *cursor, uintptr_t *state);

static const nested_handler table_164e310[256] = {
    [0x00] = run_164e4f0,
    [0x01] = run_164e510,
    [0x02] = run_164e530,
    [0x03] = run_164e550,
    [0x04] = run_164e570,
    [0x05] = run_164e590,
    [0x06] = run_164e5b0,
    [0x07] = run_164e5d0,
    [0x08] = run_164e5f0,
    [0x09] = run_164e620,
    [0x0a] = run_164e640,
    [0x0b] = run_164e660,
    [0x0c] = run_164e680,
    [0x0d] = run_164e6a0,
    [0x0e] = run_164e6c0,
    [0x0f] = run_164e6e0,
    [0x10] = run_164e710,
    [0x11] = run_164e730,
    [0x12] = run_164e760,
    [0x13] = run_164e780,
    [0x14] = run_164e7a0,
    [0x15] = run_164e7d0,
    [0x16] = run_164e7f0,
    [0x17] = run_164e810,
    [0x18] = run_164e830,
    [0x19] = run_164e850,
    [0x1a] = run_164e870,
    [0x1b] = run_164e8b0,
    [0x1c] = run_164e8e0,
    [0x1d] = run_164e900,
    [0x1e] = run_164e920,
    [0x1f] = run_164e940,
    [0x20] = run_164e960,
    [0x21] = run_164e980,
    [0x22] = run_164e9a0,
    [0x23] = run_164e9e0,
    [0x24] = run_164ea00,
    [0x25] = run_164ea30,
    [0x26] = run_164ea50,
    [0x27] = run_164ea70,
    [0x28] = run_164ea90,
    [0x29] = run_164ead0,
    [0x2b] = run_164eb10,
    [0x2c] = run_164eb30,
    [0x2d] = run_164eb50,
    [0x2e] = run_164eb70,
    [0x2f] = run_164eb90,
    [0x30] = run_164ebb0,
    [0x31] = run_164ebe0,
    [0x32] = run_164ec10,
    [0x33] = run_164ec30,
    [0x34] = run_164ec60,
    [0x35] = run_164ec80,
    [0x36] = run_164eca0,
    [0x37] = run_164ece0,
    [0x38] = run_164ed10,
    [0x39] = run_164ed30,
    [0x3a] = run_164ed50,
    [0x3b] = run_164ed70,
    [0x3c] = run_164ed90,
    [0x3d] = run_164edb0,
    [0x3e] = run_164edd0,
    [0x3f] = run_164edf0,
    [0x40] = run_164ee20,
    [0x41] = run_164ee40,
    [0x42] = run_164ee60,
    [0x43] = run_164eea0,
    [0x44] = run_164eec0,
    [0x45] = run_164eee0,
    [0x46] = run_164ef00,
    [0x47] = run_164ef20,
    [0x48] = run_164ef40,
    [0x49] = run_164ef60,
    [0x4a] = run_164ef80,
    [0x4b] = run_164efc0,
    [0x4c] = run_164efe0,
    [0x4d] = run_164f000,
    [0x4e] = run_164f020,
    [0x4f] = run_164f040,
    [0x50] = run_164f060,
    [0x51] = run_164f080,
    [0x52] = run_164f0a0,
    [0x53] = run_164f0c0,
    [0x54] = run_164f0e0,
    [0x55] = run_164f110,
    [0x56] = run_164f130,
    [0x57] = run_164f170,
    [0x58] = run_164f190,
    [0x59] = run_164f1b0,
    [0x5a] = run_164f1d0,
    [0x5b] = run_164f200,
    [0x5c] = run_164f220,
    [0x5d] = run_164f240,
    [0x5e] = run_164f270,
    [0x5f] = run_164f290,
    [0x60] = run_164f2b0,
    [0x61] = run_164f2d0,
    [0x62] = run_164f2f0,
    [0x63] = run_164f310,
    [0x64] = run_164f330,
    [0x65] = run_164f350,
    [0x66] = run_164f390,
    [0x67] = run_164f3b0,
    [0x68] = run_164f3d0,
    [0x69] = run_164f3f0,
    [0x6b] = run_164f450,
    [0x6c] = run_164f470,
    [0x6d] = run_164f4a0,
    [0x6e] = run_164f4c0,
    [0x6f] = run_164f4e0,
    [0x70] = run_164f510,
    [0x71] = run_164f530,
    [0x72] = run_164f550,
    [0x73] = run_164f570,
    [0x74] = run_164f5a0,
    [0x75] = run_164f5c0,
    [0x76] = run_164f5e0,
    [0x77] = run_164f620,
    [0x78] = run_164f640,
    [0x79] = run_164f660,
    [0x7a] = run_164f680,
    [0x7b] = run_164f6a0,
    [0x7c] = run_164f6c0,
    [0x7d] = run_164f6e0,
    [0x7e] = run_164f700,
    [0x7f] = run_164f720,
    [0x80] = run_164f740,
    [0x81] = run_164f760,
    [0x82] = run_164f790,
    [0x83] = run_164f7d0,
    [0x85] = run_164f810,
    [0x87] = run_164f850,
    [0x88] = run_164f870,
    [0x89] = run_164f890,
    [0x8b] = run_164f8d0,
    [0x8c] = run_164f900,
    [0x8d] = run_164f910,
    [0x8e] = run_164f930,
    [0x8f] = run_164f950,
    [0x90] = run_164f970,
    [0x91] = run_164f990,
    [0x92] = run_164f9b0,
    [0x93] = run_164f9d0,
    [0x94] = run_164f9f0,
    [0x95] = run_164fa10,
    [0x96] = run_164fa40,
    [0x97] = run_164fa70,
    [0x98] = run_164faa0,
    [0x99] = run_164fac0,
    [0x9a] = run_164fae0,
    [0x9b] = run_164fb20,
    [0x9c] = run_164fb40,
    [0x9d] = run_164fb60,
    [0x9e] = run_164fb90,
    [0x9f] = run_164fbb0,
    [0xa0] = run_164fbd0,
    [0xa1] = run_164fbf0,
    [0xa2] = run_164fc10,
    [0xa3] = run_164fc30,
    [0xa4] = run_164fc50,
    [0xa5] = run_164fc70,
    [0xa6] = run_164fca0,
    [0xa7] = run_164fcd0,
    [0xa8] = run_164fcf0,
    [0xaa] = run_164fd40,
    [0xab] = run_164fd60,
    [0xac] = run_164fd80,
    [0xad] = run_164fdb0,
    [0xae] = run_164fdd0,
    [0xaf] = run_164fdf0,
    [0xb0] = run_164fe10,
    [0xb1] = run_164fe30,
    [0xb2] = run_164fe50,
    [0xb3] = run_164fe70,
    [0xb4] = run_164fe90,
    [0xb5] = run_164feb0,
    [0xb6] = run_164fef0,
    [0xb7] = run_164ff10,
    [0xb8] = run_164ff50,
    [0xb9] = run_164ff70,
    [0xba] = run_164ff90,
    [0xbb] = run_164ffb0,
    [0xbc] = run_164ffd0,
    [0xbd] = run_164fff0,
    [0xbe] = run_1650010,
    [0xbf] = run_1650030,
    [0xc0] = run_1650050,
    [0xc1] = run_1650070,
    [0xc2] = run_1650090,
    [0xc3] = run_16500b0,
    [0xc4] = run_16500d0,
    [0xc5] = run_16500f0,
    [0xc6] = run_1650120,
    [0xc7] = run_1650150,
    [0xc8] = run_1650170,
    [0xc9] = run_1650190,
    [0xca] = run_16501b0,
    [0xcb] = run_16501d0,
    [0xcc] = run_16501f0,
    [0xcd] = run_1650210,
    [0xce] = run_1650230,
    [0xcf] = run_1650250,
    [0xd0] = run_1650270,
    [0xd1] = run_16502a0,
    [0xd2] = run_16502c0,
    [0xd3] = run_16502e0,
    [0xd4] = run_1650300,
    [0xd5] = run_1650330,
    [0xd6] = run_1650350,
    [0xd7] = run_1650370,
    [0xd8] = run_16503b0,
    [0xd9] = run_16503d0,
    [0xda] = run_16503f0,
    [0xdb] = run_1650420,
    [0xdc] = run_1650440,
    [0xdd] = run_1650470,
    [0xdf] = run_16504c0,
    [0xe0] = run_16504e0,
    [0xe1] = run_1650500,
    [0xe2] = run_1650520,
    [0xe3] = run_1650540,
    [0xe4] = run_1650560,
    [0xe5] = run_1650580,
    [0xe6] = run_16505a0,
    [0xe7] = run_16505c0,
    [0xe8] = run_16505e0,
    [0xe9] = run_1650600,
    [0xea] = run_1650620,
    [0xeb] = run_1650640,
    [0xec] = run_1650660,
    [0xed] = run_1650690,
    [0xee] = run_16506c0,
    [0xef] = run_16506f0,
    [0xf0] = run_1650710,
    [0xf1] = run_1650730,
    [0xf2] = run_1650750,
    [0xf3] = run_1650770,
    [0xf4] = run_1650790,
    [0xf5] = run_16507b0,
    [0xf6] = run_16507e0,
    [0xf7] = run_1650820,
    [0xf8] = run_1650840,
    [0xf9] = run_1650860,
    [0xfa] = run_1650880,
    [0xfb] = run_16508a0,
    [0xfc] = run_16508c0,
    [0xfd] = run_16508e0,
    [0xfe] = run_1650900,
    [0xff] = run_1650930,
};

static const nested_handler table_164e400[256] = {
    [0x00] = run_1650950,
    [0x01] = run_1650970,
    [0x02] = run_1650990,
    [0x03] = run_16509b0,
    [0x04] = run_16509d0,
    [0x05] = run_16509f0,
    [0x06] = run_1650a10,
    [0x07] = run_1650a30,
    [0x08] = run_1650a50,
    [0x09] = run_1650a80,
    [0x0a] = run_1650aa0,
    [0x0b] = run_1650ac0,
    [0x0c] = run_1650ae0,
    [0x0d] = run_1650b00,
    [0x0e] = run_1650b20,
    [0x0f] = run_1650b40,
    [0x10] = run_1650b70,
    [0x11] = run_1650b90,
    [0x12] = run_1650bc0,
    [0x13] = run_1650be0,
    [0x15] = run_1650c30,
    [0x16] = run_1650c50,
    [0x17] = run_1650c70,
    [0x18] = run_1650c90,
    [0x19] = run_1650cb0,
    [0x1a] = run_1650cd0,
    [0x1b] = run_1650d10,
    [0x1c] = run_1650d40,
    [0x1d] = run_1650d60,
    [0x1e] = run_1650d80,
    [0x1f] = run_1650da0,
    [0x20] = run_1650dc0,
    [0x21] = run_1650de0,
    [0x22] = run_1650e00,
    [0x23] = run_1650e40,
    [0x24] = run_1650e60,
    [0x25] = run_1650e90,
    [0x27] = run_1650ed0,
    [0x28] = run_1650ef0,
    [0x29] = run_1650f30,
    [0x2a] = run_1650f50,
    [0x2c] = run_1650f90,
    [0x2d] = run_1650fb0,
    [0x2e] = run_1650fd0,
    [0x2f] = run_1650ff0,
    [0x32] = run_1651070,
    [0x33] = run_1651090,
    [0x34] = run_16510c0,
    [0x35] = run_16510e0,
    [0x36] = run_1651100,
    [0x37] = run_1651140,
    [0x38] = run_1651170,
    [0x39] = run_1651190,
    [0x3a] = run_16511b0,
    [0x3b] = run_16511d0,
    [0x3c] = run_16511f0,
    [0x3d] = run_1651210,
    [0x3e] = run_1651230,
    [0x3f] = run_1651250,
    [0x40] = run_1651280,
    [0x41] = run_16512a0,
    [0x42] = run_16512c0,
    [0x43] = run_1651300,
    [0x44] = run_1651320,
    [0x45] = run_1651340,
    [0x47] = run_1651380,
    [0x48] = run_16513a0,
    [0x49] = run_16513c0,
    [0x4a] = run_16513e0,
    [0x4b] = run_1651420,
    [0x4c] = run_1651440,
    [0x4d] = run_1651460,
    [0x4e] = run_1651480,
    [0x4f] = run_16514a0,
    [0x50] = run_16514c0,
    [0x51] = run_16514e0,
    [0x52] = run_1651500,
    [0x53] = run_1651520,
    [0x54] = run_1651540,
    [0x55] = run_1651570,
    [0x56] = run_1651590,
    [0x57] = run_16515d0,
    [0x58] = run_16515f0,
    [0x59] = run_1651610,
    [0x5a] = run_1651630,
    [0x5b] = run_1651660,
    [0x5c] = run_1651680,
    [0x5d] = run_16516a0,
    [0x5e] = run_16516d0,
    [0x5f] = run_16516f0,
    [0x61] = run_1651730,
    [0x62] = run_1651750,
    [0x63] = run_1651770,
    [0x64] = run_1651790,
    [0x65] = run_16517b0,
    [0x66] = run_16517f0,
    [0x67] = run_1651810,
    [0x68] = run_1651830,
    [0x69] = run_1651850,
    [0x6a] = run_1651890,
    [0x6b] = run_16518b0,
    [0x6c] = run_16518d0,
    [0x6e] = run_1651920,
    [0x6f] = run_1651940,
    [0x70] = run_1651970,
    [0x73] = run_16519d0,
    [0x74] = run_1651a00,
    [0x75] = run_1651a20,
    [0x76] = run_1651a40,
    [0x77] = run_1651a80,
    [0x79] = run_1651ac0,
    [0x7a] = run_1651ae0,
    [0x7b] = run_1651b00,
    [0x7c] = run_1651b20,
    [0x7d] = run_1651b40,
    [0x7e] = run_1651b60,
    [0x7f] = run_1651b80,
    [0x80] = run_1651ba0,
    [0x81] = run_1651bc0,
    [0x82] = run_1651bf0,
    [0x83] = run_1651c30,
    [0x85] = run_1651c70,
    [0x87] = run_1651cb0,
    [0x88] = run_1651cd0,
    [0x89] = run_1651cf0,
    [0x8a] = run_1651d10,
    [0x8b] = run_1651d30,
    [0x8c] = run_1651d60,
    [0x8d] = run_1651d70,
    [0x8e] = run_1651d90,
    [0x8f] = run_1651db0,
    [0x91] = run_1651df0,
    [0x92] = run_1651e10,
    [0x93] = run_1651e30,
    [0x95] = run_1651e70,
    [0x96] = run_1651ea0,
    [0x97] = run_1651ed0,
    [0x99] = run_1651f20,
    [0x9a] = run_1651f40,
    [0x9b] = run_1651f80,
    [0x9c] = run_1651fa0,
    [0x9d] = run_1651fc0,
    [0x9e] = run_1651ff0,
    [0xa0] = run_1652030,
    [0xa1] = run_1652050,
    [0xa4] = run_16520b0,
    [0xa5] = run_16520d0,
    [0xa6] = run_1652100,
    [0xa7] = run_1652130,
    [0xa8] = run_1652150,
    [0xa9] = run_1652170,
    [0xab] = run_16521c0,
    [0xac] = run_16521e0,
    [0xad] = run_1652210,
    [0xae] = run_1652230,
    [0xaf] = run_1652250,
    [0xb1] = run_1652290,
    [0xb2] = run_16522b0,
    [0xb3] = run_16522d0,
    [0xb5] = run_1652310,
    [0xb6] = run_1652350,
    [0xb7] = run_1652370,
    [0xb8] = run_16523b0,
    [0xb9] = run_16523d0,
    [0xbb] = run_1652410,
    [0xbc] = run_1652430,
    [0xbd] = run_1652450,
    [0xbe] = run_1652470,
    [0xbf] = run_1652490,
    [0xc0] = run_16524b0,
    [0xc1] = run_16524d0,
    [0xc2] = run_16524f0,
    [0xc3] = run_1652510,
    [0xc6] = run_1652580,
    [0xc7] = run_16525b0,
    [0xc9] = run_16525f0,
    [0xca] = run_1652610,
    [0xcb] = run_1652630,
    [0xcc] = run_1652650,
    [0xcd] = run_1652670,
    [0xce] = run_1652690,
    [0xcf] = run_16526b0,
    [0xd0] = run_16526d0,
    [0xd1] = run_1652700,
    [0xd2] = run_1652720,
    [0xd3] = run_1652740,
    [0xd4] = run_1652760,
    [0xd5] = run_1652790,
    [0xd6] = run_16527b0,
    [0xd7] = run_16527d0,
    [0xd8] = run_1652810,
    [0xd9] = run_1652830,
    [0xda] = run_1652850,
    [0xdb] = run_1652880,
    [0xdd] = run_16528d0,
    [0xde] = run_1652900,
    [0xdf] = run_1652920,
    [0xe0] = run_1652940,
    [0xe2] = run_1652980,
    [0xe3] = run_16529a0,
    [0xe4] = run_16529c0,
    [0xe5] = run_16529e0,
    [0xe6] = run_1652a00,
    [0xe7] = run_1652a20,
    [0xe8] = run_1652a40,
    [0xe9] = run_1652a60,
    [0xea] = run_1652a80,
    [0xeb] = run_1652aa0,
    [0xec] = run_1652ac0,
    [0xed] = run_1652af0,
    [0xee] = run_1652b20,
    [0xef] = run_1652b50,
    [0xf0] = run_1652b70,
    [0xf1] = run_1652b90,
    [0xf2] = run_1652bb0,
    [0xf3] = run_1652bd0,
    [0xf4] = run_1652bf0,
    [0xf5] = run_1652c10,
    [0xf6] = run_1652c40,
    [0xf7] = run_1652c80,
    [0xf8] = run_1652ca0,
    [0xf9] = run_1652cc0,
    [0xfa] = run_1652ce0,
    [0xfb] = run_1652d00,
    [0xfc] = run_1652d20,
    [0xfd] = run_1652d40,
    [0xfe] = run_1652d60,
    [0xff] = run_1652d90,
};

static const nested_handler table_25ad720[256] = {
    [0x00] = run_25ad910,
    [0x06] = run_25ad9e0,
    [0x10] = run_25adb60,
    [0x15] = run_25adc10,
    [0x18] = run_25adc70,
    [0x19] = run_25adc90,
    [0x1c] = run_25adcf0,
    [0x2e] = run_25adfb0,
    [0x35] = run_25ae0a0,
    [0x37] = run_25ae0e0,
    [0x3a] = run_25ae140,
    [0x3e] = run_25ae1c0,
    [0x3f] = run_25ae200,
    [0x40] = run_25ae220,
    [0x45] = run_25ae2f0,
    [0x48] = run_25ae360,
    [0x53] = run_25ae540,
    [0x60] = run_25ae700,
    [0x72] = run_25ae9a0,
    [0x75] = run_25aea00,
    [0x7c] = run_25aeaf0,
    [0x80] = run_25aeb80,
    [0x8c] = run_25aed20,
    [0x9d] = run_25aef70,
    [0x9e] = run_25aef90,
    [0xa3] = run_25af040,
    [0xad] = run_25af180,
    [0xae] = run_25af1a0,
    [0xbc] = run_25af3a0,
    [0xbd] = run_25af3c0,
    [0xc6] = run_25af4f0,
    [0xeb] = run_25afa10,
    [0xec] = run_25afa50,
    [0xef] = run_25afae0,
    [0xf0] = run_25afb00,
    [0xfb] = run_25afca0,
    [0xff] = run_25afd40,
};

static const nested_handler table_25ad810[256] = {
    [0x00] = run_25afd70,
    [0x01] = run_25afd90,
    [0x05] = run_25afe10,
    [0x06] = run_25afe40,
    [0x07] = run_25afe60,
    [0x08] = run_25afe80,
    [0x09] = run_25afea0,
    [0x11] = run_25affe0,
    [0x18] = run_25b00d0,
    [0x19] = run_25b00f0,
    [0x1b] = run_25b0130,
    [0x1c] = run_25b0150,
    [0x21] = run_25b0210,
    [0x2f] = run_25b0430,
    [0x35] = run_25b0500,
    [0x3a] = run_25b05a0,
    [0x3e] = run_25b0620,
    [0x3f] = run_25b0660,
    [0x40] = run_25b0680,
    [0x45] = run_25b0750,
    [0x48] = run_25b07c0,
    [0x52] = run_25b0960,
    [0x59] = run_25b0a70,
    [0x6b] = run_25b0ce0,
    [0x72] = run_25b0e00,
    [0x80] = run_25b0fe0,
    [0x8b] = run_25b1150,
    [0x9d] = run_25b13d0,
    [0xad] = run_25b15e0,
    [0xb3] = run_25b16a0,
    [0xb6] = run_25b1710,
    [0xbb] = run_25b17e0,
    [0xbc] = run_25b1800,
    [0xc6] = run_25b1950,
    [0xcf] = run_25b1a70,
    [0xeb] = run_25b1e70,
    [0xec] = run_25b1eb0,
    [0xfd] = run_25b2160,
    [0xfe] = run_25b2180,
    [0xff] = run_25b21a0,
};

const nested_handler *nested_table(uintptr_t variant) {
    if (variant == 0x164e310) return table_164e310;
    if (variant == 0x164e400) return table_164e400;
    if (variant == 0x25ad720) return table_25ad720;
    if (variant == 0x25ad810) return table_25ad810;
    return NULL;
}
