#include <stdio.h>
#include <stdint.h>

struct registers {
    uint8_t A;
    uint8_t X;
    uint8_t Y;
    uint8_t SP;
    uint16_t PC;
};
struct flags {
    uint8_t C:1;
    uint8_t I:1;
    uint8_t D:1;
    uint8_t V:1;
    uint8_t N:1;
    uint8_t B:1;
};
