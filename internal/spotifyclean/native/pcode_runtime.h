#ifndef SPOTIFYCLEAN_PCODE_RUNTIME_H
#define SPOTIFYCLEAN_PCODE_RUNTIME_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct clean_runtime clean_runtime;

clean_runtime *clean_open(const void *program, size_t program_size,
                          const void *memory, size_t memory_size,
                          char *error, size_t error_size);
int clean_derive(clean_runtime *runtime, const void *response, size_t response_size, uint8_t result[28]);
int clean_set_entropy(clean_runtime *runtime, const void *data, size_t size);
int clean_init_cipher(clean_runtime *runtime, const uint8_t key[28]);
int clean_cipher_state(clean_runtime *runtime, void *state, size_t size);
int clean_set_cipher_state(clean_runtime *runtime, const void *state, size_t size);
int clean_seek_cipher(clean_runtime *runtime, uint64_t block);
int clean_transform_cipher(clean_runtime *runtime);
const char *clean_error(const clean_runtime *runtime);
void clean_close(clean_runtime *runtime);

#ifdef __cplusplus
}
#endif

#endif
