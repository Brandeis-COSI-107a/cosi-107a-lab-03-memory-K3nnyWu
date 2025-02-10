#include <stdio.h>

int uninitialized_data;

void sample_function() {}

int main() {
    int stack_variable;
    const char *initialized_data = "LAB3";

    printf("stack variable:      0x%012lX\n", (unsigned long) &stack_variable);
    printf("initialized data:    0x%012lX\n", (unsigned long) initialized_data);
    printf("uninitialized data:  0x%012lX\n", (unsigned long) &uninitialized_data);
    printf("main:                0x%012lX\n", (unsigned long) &main);
    printf("function:            0x%012lX\n", (unsigned long) &sample_function);

    return 0;
}

