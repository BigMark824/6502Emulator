#ifndef ASSEMBLY_HANDLER_H
#define ASSEMBLY_HANDLER_H

#include <memoryHandler.h>
#include <stdio.h>
#include <stdint.h>

enum instruction
{
    LDA,
    STA
};

struct instruction_set {
    enum instruction type;
    uint8_t value;
};  

void CPU(struct instruction_set instSet);

#endif
