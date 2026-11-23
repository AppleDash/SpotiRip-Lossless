#ifndef SPOTIFYCLEAN_NESTED_VM_H
#define SPOTIFYCLEAN_NESTED_VM_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

int nested_run(uintptr_t variant, const uint8_t *encoded, size_t length, uint32_t key, uintptr_t *state);
int nested_run_state(uintptr_t variant, const uint8_t *encoded, size_t length, uintptr_t *state);

#ifdef __cplusplus
}
#endif

#endif
