#include <stdio.h>

// simple functions
int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

// function that takes a function pointer as argument
void calculate(int x, int y, int (*operation)(int, int)) {
    int result = operation(x, y);
    printf("Result: %d\n", result);
}

int main() {
    // ---- Pointer to Pointer ----
    int num = 42;
    int *ptr = &num;        // pointer to num
    int **pptr = &ptr;      // pointer to pointer

    printf("Value of num: %d\n", num);
    printf("Using ptr: %d\n", *ptr);
    printf("Using pptr: %d\n", **pptr);
    printf("\n");

    // changing value through double pointer
    **pptr = 100;
    printf("After changing through pptr, num = %d\n", num);
    printf("\n");

    // ---- Function Pointers ----
    // declaring a function pointer
    int (*funcPtr)(int, int);

    // pointing to add function
    funcPtr = add;
    printf("Using function pointer for add: %d\n", funcPtr(5, 3));

    // pointing to multiply function
    funcPtr = multiply;
    printf("Using function pointer for multiply: %d\n", funcPtr(5, 3));

    // passing function as argument
    printf("\nPassing add as argument: ");
    calculate(10, 5, add);

    printf("Passing multiply as argument: ");
    calculate(10, 5, multiply);

    return 0;
}
