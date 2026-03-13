🚀 **Day 23: Multi-file Programs and Header Files in C!**

Hello Everyone! 👋

Day 23 of my 30 Days of C challenge! Today I learned something that I was curious about for a long time — how to split a C program into multiple files! 🌐
Until now all my code was in one file. Today I learned how to organize code properly using header files.

### Key Learnings:

1. **Why Multiple Files?**
   - When programs grow large, keeping everything in one file becomes messy.
   - Split code into logical parts — each file handles one thing.

2. **Header Files (.h):**
   - Header files contain function declarations (prototypes).
   - We use `#include "filename.h"` to include our own header files (double quotes, not angle brackets).

3. **Source Files (.c):**
   - The actual function definitions go in `.c` files.
   - Each `.c` file can include the header file it needs.

4. **`#ifndef` guard in headers:**
   - Prevents the same header from being included twice.
   - Called "include guard" — important to always add!

### Code Snippet - Multi-file Example:

**math_utils.h** (header file)
```c
#ifndef MATH_UTILS_H
#define MATH_UTILS_H

// function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

#endif
```

**math_utils.c** (function definitions)
```c
#include "math_utils.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}
```

**main.c** (main program)
```c
#include <stdio.h>
#include "math_utils.h"

int main() {
    int x = 10, y = 5;

    printf("Add: %d\n", add(x, y));
    printf("Subtract: %d\n", subtract(x, y));
    printf("Multiply: %d\n", multiply(x, y));

    return 0;
}
```

**To compile multiple files:**
```
gcc main.c math_utils.c -o program
```

### Reflecting on the Journey:

Day 23 showed me how real-world C projects are structured. Separating code into files makes it much cleaner and easier to manage. This is how large projects like operating systems are built! 💻💡

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #HeaderFiles #MultiFileProgramming #ProgrammingJourney #LinkedInLearning
