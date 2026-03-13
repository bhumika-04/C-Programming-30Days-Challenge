#include <stdio.h>

int main() {
    int a = 5, b = 2;

    // arithmetic operators
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // relational operators
    printf("a == b: %d\n", a == b);
    printf("a > b: %d\n", a > b);

    // ternary operator - find the max value
    int max = (a > b) ? a : b;
    printf("Max = %d\n", max);

    // assignment shorthand
    a += 3;
    printf("a after += 3 is %d\n", a);

    return 0;
}
