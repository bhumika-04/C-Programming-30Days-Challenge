🚀 **Day 24: Command Line Arguments in C!**

Hello Everyone! 👋

Day 24 of my 30 Days of C challenge! Today I learned about Command Line Arguments — passing input directly while running the program! 🌐
This was something I had seen in tutorials before but never understood. Today it finally clicked!

### Key Learnings:

1. **What are Command Line Arguments?**
   - Instead of asking for input inside the program, we can pass values when we run it.
   - Example: `./program Bhumika 21` — here "Bhumika" and "21" are command line arguments.

2. **argc and argv:**
   - `argc` (argument count) — tells how many arguments were passed. Always at least 1 (the program name itself).
   - `argv` (argument vector) — array of strings containing the arguments.

3. **argv[0]:**
   - Always the name of the program itself.
   - Our actual arguments start from `argv[1]`.

4. **Converting string to number:**
   - `atoi()` from `stdlib.h` converts a string argument to integer.

### Code Snippet - Using Command Line Arguments:

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // argc tells how many arguments
    printf("Number of arguments: %d\n", argc);
    printf("Program name: %s\n", argv[0]);

    if (argc < 3) {
        printf("Please provide name and age as arguments\n");
        printf("Usage: ./program <name> <age>\n");
        return 1;
    }

    char *name = argv[1];
    int age = atoi(argv[2]);  // convert string to int

    printf("Hello, %s!\n", name);
    printf("Your age is: %d\n", age);

    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }

    return 0;
}
```

**Run it like this:**
```
gcc day24.c -o program
./program Bhumika 22
```

**Output:**
```
Number of arguments: 3
Program name: ./program
Hello, Bhumika!
Your age is: 22
You are an adult.
```

### Reflecting on the Journey:

Day 24 was really practical! Now I understand how tools like `gcc`, `git`, and other command line programs work — they all use `argc` and `argv` internally. Very cool to learn this! 💻💡

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #CommandLineArguments #argc #argv #ProgrammingJourney #LinkedInLearning
