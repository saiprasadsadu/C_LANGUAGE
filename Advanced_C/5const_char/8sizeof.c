#define SIZEOF(type) (char *)((type *)0+1)-(char *)((type *)0)
#include<stdio.h>
int main() {
    printf("Size of char: %lu\n", SIZEOF(char));
    printf("Size of int: %lu\n", SIZEOF(int));
    printf("Size of float: %lu\n", SIZEOF(float));
    printf("Size of double: %lu\n", SIZEOF(double));
    return 0;
}
