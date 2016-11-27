#pragma once
#include <stdbool.h>

#include "utils.h"
#include "ed25519.h"

typedef struct {
    uint8_t * secret;
    uint8_t * random;
    uint8_t * commit;
    uint8_t * challenge;
    uint8_t * response;
    char * remote;
} cosi_state;

inline bool cosi_state_check(cosi_state * state);
