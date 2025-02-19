#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        int num = strtol(argv[i], NULL, 0) & 0xFF;  
        printf("%d 0x%02X %d\n", i, num, num);
    }
    return 0;
}
