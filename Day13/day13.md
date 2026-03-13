# Day 13: Library Functions in C

Hello Everyone! 👋

Day 13 of my 30 Days of C challenge and today I explored C's built-in library functions. C has a huge set of ready-to-use functions — we just need to include the right header file!

### Key Learnings:

1. **What are Library Functions?**
   - Pre-written functions that come with C — we don't have to write them from scratch.
   - We include them using `#include <header_file.h>`.

2. **`stdio.h` — Input/Output:**
   - `printf()`, `scanf()`, `fgets()` — the most used functions in C.

3. **`stdlib.h` — General Utilities:**
   - `malloc()`, `free()` for memory management.
   - `rand()` for random numbers, `abs()` for absolute value.

4. **`string.h` — String Functions:**
   - `strlen()`, `strcpy()`, `strcat()`, `strcmp()` — already used these on Day 10!

5. **`math.h` — Math Functions:**
   - `sqrt()`, `pow()`, `abs()`, `ceil()`, `floor()`.
   - Need to compile with `-lm` flag when using math.h.

### Code Snippet - Using Library Functions:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    // string functions
    char str[] = "Hello";
    printf("Length: %d\n", strlen(str));

    // math functions
    printf("sqrt(16) = %.2f\n", sqrt(16));
    printf("pow(2, 3) = %.2f\n", pow(2, 3));

    // random number
    printf("Random: %d\n", rand() % 100); // 0 to 99

    // abs value
    printf("abs(-5) = %d\n", abs(-5));

    return 0;
}
```

### Reflecting on the Journey:

Library functions save so much time! Instead of writing my own square root logic I can just use `sqrt()`. The key thing is knowing which header to include for which function. 💻

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #LibraryFunctions #StdLib #MathH #LinkedInLearning
