# Day 7: Decision Making and Loops in C

Hello Everyone! 👋

Day 7 of my 30 Days of C challenge and today I covered one of the most used topics — control flow! `if-else`, `switch`, loops, and even got an intro to recursion.

### Key Learnings:

1. **`if` and `if-else`:**
   - Used to make decisions based on a condition.
   - Can be nested inside each other for more complex conditions.

2. **`switch` Statement:**
   - Cleaner alternative to multiple `if-else` when checking one variable against many values.
   - Don't forget `break` — I forgot it once and all cases ran!

3. **Loops:**
   - `for` loop — when I know how many times to run.
   - `while` loop — when I want to run until a condition becomes false.
   - `do-while` — runs at least once before checking the condition.

4. **`goto` Statement:**
   - Jumps to a labeled section in the code. Teachers say avoid it — it makes code messy.
   - I tried it just to understand how it works.

5. **Recursion:**
   - A function calling itself! Used it to calculate factorial.
   - Need to make sure there is always a base case — otherwise infinite loop!

### Code Snippet - Loops and Recursion:

```c
#include <stdio.h>

// recursive factorial function
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num = 5;

    // for loop
    for (int i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // do-while loop
    int counter = 1;
    do {
        printf("Counter: %d\n", counter);
        counter++;
    } while (counter <= 3);

    // recursion
    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}
```

### Reflecting on the Journey:

Loops are something I use all the time but today I understood WHY each type exists. Recursion was the trickiest part — once you understand the base case everything makes sense! 💻

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #DecisionMaking #Loops #Recursion #LinkedInLearning
