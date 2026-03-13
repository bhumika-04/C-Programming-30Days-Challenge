🚀 **Day 26: Function Pointers and Pointer to Pointer in C!**

Hello Everyone! 👋

Day 26 of my 30 Days of C challenge! Today I explored some advanced pointer concepts — Function Pointers and Pointer to Pointer! 🌐
These were tough but very interesting — especially function pointers which I had never seen before!

### Key Learnings:

1. **Pointer to Pointer (`**`):**
   - A pointer that stores the address of another pointer.
   - Useful when you need to modify a pointer inside a function.

2. **Function Pointers:**
   - In C, functions also have addresses in memory!
   - A function pointer stores the address of a function and lets you call it through the pointer.

3. **Why Function Pointers?**
   - You can pass functions as arguments to other functions.
   - Very useful for things like sorting with custom comparators.

### Code Snippet - Pointer to Pointer and Function Pointers:

```c
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
```

### Reflecting on the Journey:

Day 26 was mind-bending! The idea that functions have memory addresses just like variables is very powerful. Function pointers open up a whole new level of flexibility in C programming. 💻💡

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #FunctionPointers #PointerToPointer #AdvancedC #ProgrammingJourney #LinkedInLearning
