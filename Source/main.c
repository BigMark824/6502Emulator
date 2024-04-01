#include <stdio.h>
#include <assemblyHandler.h>
#include <memoryHandler.h>
#include <cpuHandler.h>
#include <stdint.h>

typedef uint8_t byte;

int main() {

    struct registers reg;
    struct flags flag;
    // on startup initialise everything to 0
    reg.A = 0;
    reg.X = 0;
    reg.Y = 0;
    reg.PC = 0x0001;
    flag.B = 0;
    flag.C = 0;
    flag.D = 0;
    flag.I = 0;
    flag.N = 0;
    flag.V = 0;
    for (int i = 0; i < MEM; i++) {
        mem[i] = i % 256;
    }
    mem[0x8000] = 0x0000;
    printf("A register: %u\n", reg.A);
    printf("X register: %u\n", reg.X);
    printf("Y register: %u\n", reg.Y);

    mem[0x0001] = reg.A;
    printf("Program Counter: 0x%x\n", mem[0x1000] + reg.PC);
    printf("Values in memory:\n");
    printf("Values in memory from address 0x8000:\n");
    for (int i = 0; i < MEM; i++) {
        mem[i] = 0;
    }

    mem[0x8000] = 0x4A;
    printf("Values in memory:\n");
    printf("Values in memory from address 0x0000 to 0x8000:\n");
    for (int addr = 0x0000; addr <= 0x8000; addr++) {
        printf("Address 0x%04X: %u\n", addr, mem[addr]);
    }

    return 0; 
}
