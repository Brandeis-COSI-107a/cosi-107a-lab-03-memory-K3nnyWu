#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        int num = strtol(argv[i], NULL, 0);  
        int byte1 = (num >> 8) & 0xFF;       

        printf("%d 0x%02X\n", i, byte1);
    }
    return 0;
}
