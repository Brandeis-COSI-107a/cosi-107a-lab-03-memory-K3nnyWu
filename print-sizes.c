#include <stdio.h>

int main() {
    int integer_var = 978;
    int *integer_ptr;
    char char_array[200];
    char *char_ptr;

    printf("The size of char is %lu\n", sizeof(char));
    printf("The size of short is %lu\n", sizeof(short));
    printf("The size of int is %lu\n", sizeof(int));
    printf("The size of long is %lu\n", sizeof(long));
    printf("The size of long long is %lu\n", sizeof(long long));
    printf("The size of float is %lu\n", sizeof(float));
    printf("The size of double is %lu\n", sizeof(double));
    printf("The size of char * is %lu\n", sizeof(char *));
    printf("The size of int * is %lu\n", sizeof(int *));
    printf("The size of long * is %lu\n", sizeof(long *));

    printf("The size of my character array is %lu\n", sizeof(char_array));

    char_ptr = char_array;
    printf("The size of my character pointer is %lu\n", sizeof(char_ptr));

    integer_ptr = &integer_var;
    printf("The size of my int pointer is %lu\n", sizeof(integer_ptr));
    printf("The size of what my integer pointer points at is %lu\n", sizeof(*integer_ptr));

    return 0;
}
