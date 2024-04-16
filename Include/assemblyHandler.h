#ifndef ASSEMBLY_HANDLER_H
#define ASSEMBLY_HANDLER_H

#include <memoryHandler.h>
#include <cpuHandler.h>
#include <stdio.h>
#include <stdint.h>

enum instruction
{
    LDA,
    STA,
    LDX,
    STX,
    ADC,
    NOP,
    STY,
    LDY
};

struct instruction_set
{
    enum instruction type;
    uint8_t value;
};

void CPU(struct instruction_set instSet);

#endif 
