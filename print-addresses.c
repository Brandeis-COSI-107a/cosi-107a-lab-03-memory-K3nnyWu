#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        uint64_t address = strtoull(argv[i], NULL, 10);
        printf("0x%012" PRIX64 "\n", address & 0xFFFFFFFFFFFF);
    }
    return 0;
}
