# Day 4: Foundations of C Programming

Hello Everyone! 👋

Day 4 of my 30 Days of C challenge and today I focused on the building blocks of C — the things that are in literally every program but I never really paid attention to before!

### Key Learnings:

1. **Keywords and Identifiers:**
   - Keywords are reserved words in C like `int`, `return`, `if`, `while` — we cannot use them as variable names.
   - Identifiers are the names we give to variables and functions. They cannot start with a number.

2. **Tokens:**
   - Tokens are the smallest units in a C program — keywords, identifiers, operators, constants, etc.
   - Everything in a C program is made up of tokens.

3. **Variables and Scope:**
   - Variables declared inside a function are local — only accessible inside that function.
   - Variables declared outside are global — accessible everywhere in the program.

4. **Data Types and Their Sizes:**
   - `int` → 4 bytes, `float` → 4 bytes, `double` → 8 bytes, `char` → 1 byte
   - Used `sizeof()` to check the actual size on my system.

5. **Constants:**
   - Constants are values that do not change during program execution.
   - Can define them using `#define` or the `const` keyword.

6. **Typecasting:**
   - Converting one data type to another — like `(float)num` to treat an int as a float.
   - Without typecasting, `7/2` gives `3` not `3.5`!

### Code Snippet - Data Types and sizeof:

```c
#include <stdio.h>

int main() {
    // checking sizes of different data types
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu bytes\n", sizeof(char));

    // typecasting example
    int num = 7;
    float result = (float)num / 2;
    printf("7 / 2 with typecasting = %.2f\n", result);

    return 0;
}
```

### Reflecting on the Journey:

These are the basics that everything else in C builds on. Understanding scope and data type sizes was especially useful — it explains a lot of bugs that happen when you mix up types! 💻

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #DataTypes #Variables #ProgrammingJourney #LinkedInLearning
