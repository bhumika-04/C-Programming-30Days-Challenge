# Day 10: Strings in C

Hello Everyone! 👋

Day 10 of my 30 Days of C challenge and today I learned about strings. In C there is no built-in `string` type like in Java or Python — strings are just arrays of characters. That was a bit surprising!

### Key Learnings:

1. **What is a String in C?**
   - A string is a `char` array that ends with a null character `'\0'`.
   - Example: `char name[10] = "Bhumika";` — the `\0` is automatically added at the end.

2. **String Functions from `string.h`:**
   - `strlen()` — gives the length of the string.
   - `strcpy()` — copies one string to another.
   - `strcat()` — joins two strings together.
   - `strcmp()` — compares two strings (returns 0 if equal).

3. **Taking String Input:**
   - Used `scanf("%s", name)` for single word input.
   - For sentences with spaces, need to use `fgets()`.

4. **Strings vs Character Arrays:**
   - A string IS a char array but not every char array is a string — it needs the `\0` at the end.

### Code Snippet - String Operations:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char name[20] = "Bhumika";

    // length
    printf("Length: %d\n", strlen(name));

    // copy
    char copy[20];
    strcpy(copy, name);
    printf("Copied: %s\n", copy);

    // concat
    char greeting[30] = "Hello, ";
    strcat(greeting, name);
    printf("Greeting: %s\n", greeting);

    // compare
    if (strcmp(name, "Bhumika") == 0) {
        printf("Names match!\n");
    }

    return 0;
}
```

### Reflecting on the Journey:

The fact that strings in C are just char arrays with a `\0` at the end was new to me. String functions from `string.h` are really handy — I don't have to write loops for basic operations! 💻

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #Strings #StringFunctions #LinkedInLearning
