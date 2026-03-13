🚀 **Day 22: Advanced Recursion in C!**

Hello Everyone! 👋

Day 22 of my 30 Days of C challenge! Today I went deeper into Recursion with more interesting problems! 🌐
I had touched recursion on Day 7 but today I practiced some classic recursive problems that really tested my thinking!

### Key Learnings:

1. **Fibonacci Series using Recursion:**
   - Each number is the sum of the two before it: 0, 1, 1, 2, 3, 5, 8...
   - Recursion makes it simple but not very efficient for large numbers.

2. **Tower of Hanoi:**
   - A classic puzzle — move n disks from source to destination using a helper rod.
   - The recursive solution is elegant and only a few lines of code!
   - Rule: Never place a larger disk on a smaller one.

3. **How recursion works:**
   - Every recursive function needs a base case (when to stop) and a recursive case (calling itself).

### Code Snippet - Fibonacci and Tower of Hanoi:

```c
#include <stdio.h>

// fibonacci using recursion
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// tower of hanoi
void towerOfHanoi(int n, char source, char destination, char helper) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, helper, destination);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, helper, destination, source);
}

int main() {
    int i;

    // print first 10 fibonacci numbers
    printf("Fibonacci series: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n\n");

    // tower of hanoi with 3 disks
    printf("Tower of Hanoi with 3 disks:\n");
    towerOfHanoi(3, 'A', 'C', 'B');

    return 0;
}
```

### Reflecting on the Journey:

Day 22 made recursion click for me much better! The Tower of Hanoi solution is so short but does so much — that's the beauty of recursion. It's like magic once you understand the base case! 💻💡

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #Recursion #TowerOfHanoi #Fibonacci #ProgrammingJourney #LinkedInLearning
