# Day 8: Functions and Parameter Passing in C

Hello Everyone! 👋

Day 8 of my 30 Days of C challenge and today I focused on functions — how to write them, pass values to them, and the difference between call by value vs call by reference. This was a really important day!

### Key Learnings:

1. **User-Defined Functions:**
   - Writing my own functions makes code cleaner and reusable.
   - Every function has a return type, name, and parameters.

2. **Function Declaration vs Definition:**
   - Declaration tells the compiler the function exists (usually at the top).
   - Definition is where the actual code goes.

3. **Call by Value:**
   - A copy of the variable is passed to the function.
   - Changes inside the function do NOT affect the original variable.

4. **Call by Reference:**
   - The address of the variable is passed using `&`.
   - Changes inside the function DO affect the original variable.
   - This is where pointers from Day 3 become useful!

5. **Return Types:**
   - Functions can return `int`, `float`, `char`, or `void` (nothing).

### Code Snippet - Call by Value vs Call by Reference:

```c
#include <stdio.h>

// call by value - original not changed
void incrementByValue(int x) {
    x++;
}

// call by reference - original is changed
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
```

### Reflecting on the Journey:

The difference between call by value and call by reference was the most important thing today. I got confused at first but running the code and seeing the output made it click! 💻

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #Functions #CallByValue #CallByReference #LinkedInLearning
