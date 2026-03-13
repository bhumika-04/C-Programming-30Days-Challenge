# Day 5: Operators in C

Hello Everyone! 👋

Day 5 of my 30 Days of C challenge and today was all about operators. There are way more types of operators in C than I expected!

### Key Learnings:

1. **Arithmetic Operators:**
   - `+`, `-`, `*`, `/`, `%` for basic math operations.
   - The `%` (modulus) gives the remainder — took me a moment to remember that!

2. **Relational Operators:**
   - `==`, `!=`, `<`, `>`, `<=`, `>=` for comparisons.
   - These return either 1 (true) or 0 (false).

3. **Logical Operators:**
   - `&&` (AND), `||` (OR), `!` (NOT) for combining conditions.

4. **Bitwise Operators:**
   - `&`, `|`, `^`, `<<`, `>>` — these work directly on binary bits.
   - I found these the most confusing but also interesting!

5. **Assignment Operators:**
   - `=`, `+=`, `-=`, `*=`, `/=`, `%=` — shorthand ways to update variable values.

6. **Ternary Operator (`? :`):**
   - A short way to write simple if-else: `condition ? value_if_true : value_if_false`

### Code Snippet - Operators in Action:

```c
#include <stdio.h>

int main() {
    int a = 5, b = 2;

    // arithmetic
    printf("a + b = %d\n", a + b);
    printf("a %% b = %d\n", a % b);

    // ternary operator to find max
    int max = (a > b) ? a : b;
    printf("Max = %d\n", max);

    // shorthand assignment
    a += 3;
    printf("a after += 3 is %d\n", a);

    return 0;
}
```

### Reflecting on the Journey:

Operators are everywhere in C — even a simple `if` condition uses them. The ternary operator is really handy once you get used to the syntax. Bitwise operators are still a bit tricky but I will get there! 💻

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #OperatorsInC #ProgrammingJourney #LinkedInLearning
