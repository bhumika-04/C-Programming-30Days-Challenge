# Day 6: Storage Classes in C

Hello Everyone! 👋

Day 6 of my 30 Days of C challenge and today I learned about storage classes. I did not even know this was a thing before today — it explains how long a variable lives and where it can be accessed!

### Key Learnings:

1. **Automatic (`auto`):**
   - Default storage class for local variables.
   - The variable is created when the function is called and destroyed when it returns.
   - We don't need to write `auto` explicitly — it is the default.

2. **Static (`static`):**
   - Static variables keep their value between function calls!
   - This was really interesting — a normal local variable resets every call but static doesn't.

3. **Register (`register`):**
   - Tells the compiler to try to store the variable in a CPU register for faster access.
   - Used for variables that are accessed very frequently like loop counters.

4. **External (`extern`):**
   - Used to share a variable across multiple source files.
   - The variable is declared in one file and `extern` is used in others to access it.

### Code Snippet - Static vs Auto:

```c
#include <stdio.h>

void countCalls() {
    // auto variable - resets every call
    int autoCount = 0;
    autoCount++;

    // static variable - remembers value between calls
    static int staticCount = 0;
    staticCount++;

    printf("auto: %d | static: %d\n", autoCount, staticCount);
}

int main() {
    countCalls();
    countCalls();
    countCalls();
    return 0;
}
```

### Reflecting on the Journey:

The static variable behavior was the most surprising part of today. It holds its value across function calls which is something I did not expect. This will definitely be useful in future programs! 💻

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #StorageClassesInC #ProgrammingJourney #LinkedInLearning
