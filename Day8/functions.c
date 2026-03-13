#include <stdio.h>

// call by value - copy is passed, original not changed
void incrementByValue(int x) {
    x++;
}

// call by reference - address is passed, original is changed
void incrementByReference(int *x) {
    (*x)++;
}

float calculateSquare(float num) {
    return num * num;
}

int main() {
    int value = 10;

    incrementByValue(value);
    printf("After call by value: %d\n", value); // still 10

    incrementByReference(&value);
    printf("After call by reference: %d\n", value); // now 11

    printf("Square of 3.5 = %.2f\n", calculateSquare(3.5));

    return 0;
}
