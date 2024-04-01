#include <stdio.h>
#include <assemblyHandler.h>
#include <memoryHandler.h>
#include <cpuHandler.h>
#include <stdint.h>
#include <stdlib.h>
typedef uint8_t byte;

int main()
{

    struct registers reg;
    struct flags flag;

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
    for (int i = 0; i < MEM; i++)
    {
        mem[i] = i % 256;
    }
    mem[0x8000] = 0x0000;

    for (int i = 0; i < MEM; i++)
    {
        mem[i] = 0;
    }
    FILE *assemblyFile = fopen("test.asm", "r");
    if (assemblyFile == NULL)
    {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    char line[100];
    printf("\nContents of Assembly:\n");
    while (fgets(line, sizeof(line), assemblyFile) != NULL)
    {
        printf("%s", line);
    }
    printf("\n");
    fclose(assemblyFile);
    return 0;
}
