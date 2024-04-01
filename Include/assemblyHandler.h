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

void CPU(struct instruction_set instSet)
{
    struct registers reg;
    switch (instSet.type)
    {
    case LDA:
        reg.A = instSet.value;
        break;
    case STA:
        mem[instSet.value] = reg.A;
        break;
    case LDX:
        reg.X = instSet.value;
        break;
    case STX:
        mem[instSet.value] = reg.X;
        break;
    case ADC:
        reg.A =+ instSet.value;
        break;
    case LDY:
        reg.Y = instSet.value;
        break;
    case STY:
        mem[instSet.value] = reg.Y;
        break;
    case NOP:
        break;
    }

}

#endif
