🚀 **Day 25: Error Handling in C!**

Hello Everyone! 👋

Day 25 of my 30 Days of C challenge! Today I learned about Error Handling in C. 🌐
C doesn't have exceptions like Java or Python, so error handling is done differently here — through return values and `errno`.

### Key Learnings:

1. **Return values for errors:**
   - In C, functions usually return -1 or NULL to indicate something went wrong.
   - We check the return value and handle errors manually.

2. **errno:**
   - A global variable from `errno.h` that stores the error code of the last failed operation.
   - Different error codes mean different problems.

3. **perror():**
   - Prints a human-readable error message based on `errno`.
   - Very useful for debugging file and system errors.

4. **strerror():**
   - Converts an error number to a string message.
   - From `string.h`.

5. **exit():**
   - Used to terminate the program. `exit(0)` means success, `exit(1)` means error.

### Code Snippet - Error Handling with errno and perror:

```c
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return -1;
    }
    return a / b;
}

int main() {
    int result;

    // basic error handling with return value
    result = divide(10, 2);
    if (result != -1) {
        printf("10 / 2 = %d\n", result);
    }

    result = divide(10, 0);
    if (result == -1) {
        printf("Could not divide\n");
    }

    // errno and perror example - trying to open a file that doesn't exist
    FILE *fp = fopen("file_that_doesnt_exist.txt", "r");
    if (fp == NULL) {
        printf("Error number: %d\n", errno);
        perror("Error opening file");
        printf("Error message: %s\n", strerror(errno));
    }

    return 0;
}
```

### Reflecting on the Journey:

Day 25 taught me that in C, you are responsible for checking everything yourself. There's no automatic exception throwing — you have to be careful and check return values always. That's what makes C powerful but also tricky! 💻💡

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #ErrorHandling #errno #perror #ProgrammingJourney #LinkedInLearning
