#include <stdio.h>

int main() {
    int a = 5;   // binary: 0101
    int b = 3;   // binary: 0011

    printf("a = %d, b = %d\n", a, b);
    printf("\n");

    // AND
    printf("a & b = %d\n", a & b);   // 0001 = 1

    // OR
    printf("a | b = %d\n", a | b);   // 0111 = 7

    // XOR
    printf("a ^ b = %d\n", a ^ b);   // 0110 = 6

    // NOT
    printf("~a = %d\n", ~a);   // flips all bits

    // left shift - multiplies by 2
    printf("a << 1 = %d\n", a << 1);   // 5 * 2 = 10

    // right shift - divides by 2
    printf("a >> 1 = %d\n", a >> 1);   // 5 / 2 = 2

    // checking if a number is even or odd using bitwise
    int num = 7;
    if (num & 1) {
        printf("%d is odd\n", num);
    } else {
        printf("%d is even\n", num);
    }

    return 0;
}
