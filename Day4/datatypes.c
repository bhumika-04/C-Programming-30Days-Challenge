#include <stdio.h>

int main() {
    // checking sizes of different data types
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu bytes\n", sizeof(char));

    // typecasting example - without cast 7/2 = 3, with cast = 3.5
    int num = 7;
    float result = (float)num / 2;
    printf("7 / 2 with typecasting = %.2f\n", result);

    return 0;
}
