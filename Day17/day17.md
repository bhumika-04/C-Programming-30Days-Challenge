🚀 **Day 17: Bitwise Operators in C!**

Hello Everyone! 👋

Day 17 of my 30 Days of C challenge! Today I explored Bitwise Operators — working directly at the bit level. 🌐
Honestly this was a bit confusing at first but once I saw how bits work, it started making sense!

### Key Learnings:

1. **AND operator (&):**
   - Compares bits of two numbers. Result is 1 only if both bits are 1.

2. **OR operator (|):**
   - Result is 1 if at least one bit is 1.

3. **XOR operator (^):**
   - Result is 1 only if the bits are different.

4. **NOT operator (~):**
   - Flips all the bits. 0 becomes 1 and 1 becomes 0.

5. **Left Shift (<<) and Right Shift (>>):**
   - Shifts bits to the left or right. Left shift by 1 is like multiplying by 2, right shift by 1 is like dividing by 2.

### Code Snippet - Bitwise Operators:

```c
#include <stdio.h>

int main() {
    int a = 5;   // binary: 0101
    int b = 3;   // binary: 0011

    printf("a = %d, b = %d\n", a, b);
    printf("\n");

    // AND
    printf("a & b = %d\n", a & b);   // 0001 = 1

    // OR
    printf("a | b = %d\n", a | b);   // 0111 = 7

    // XOR
    printf("a ^ b = %d\n", a ^ b);   // 0110 = 6

    // NOT
    printf("~a = %d\n", ~a);   // flips all bits

    // left shift - multiplies by 2
    printf("a << 1 = %d\n", a << 1);   // 5 * 2 = 10

    // right shift - divides by 2
    printf("a >> 1 = %d\n", a >> 1);   // 5 / 2 = 2

    // checking if a number is even or odd using bitwise
    int num = 7;
    if (num & 1) {
        printf("%d is odd\n", num);
    } else {
        printf("%d is even\n", num);
    }

    return 0;
}
```

### Reflecting on the Journey:

Day 17 showed me a completely different way of looking at numbers — in binary! Bitwise operators are used a lot in low-level programming and now I finally understand why C is called a low-level language. 💻💡

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #BitwiseOperators #BinaryNumbers #ProgrammingJourney #LinkedInLearning
