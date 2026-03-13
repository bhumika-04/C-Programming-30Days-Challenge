# Day 3: Pointers and Dynamic Memory in C

Hello Everyone! 👋

Day 3 of my 30 Days of C challenge and today was probably the most mind-bending day so far. Pointers confused me a lot at first but after practicing I think I am starting to get it!

### Key Learnings:

1. **Pointers in C:**
   - A pointer is a variable that stores the memory address of another variable.
   - We declare a pointer using `*` and get the address of a variable using `&`.
   - This was honestly confusing at first — took me a while to understand the difference between `*p` and `p`.

2. **Dynamic Memory Allocation:**
   - Used `malloc()` to allocate memory at runtime instead of at compile time.
   - Always have to use `free()` after to release the memory — otherwise it is a memory leak!
   - `#include <stdlib.h>` is needed for malloc and free.

3. **Arrays and Pointers:**
   - Arrays and pointers are closely related in C.
   - The name of an array is basically a pointer to its first element.
   - This makes traversal using pointers possible.

### Code Snippet - Dynamic Memory Allocation:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dynamicArray;
    int size = 5;

    // allocating memory at runtime
    dynamicArray = (int*)malloc(size * sizeof(int));

    // checking if allocation worked
    if (dynamicArray != NULL) {
        for (int i = 0; i < size; i++) {
            dynamicArray[i] = i * 2; // storing values
            printf("%d ", dynamicArray[i]);
        }

        // freeing memory after use
        free(dynamicArray);
    }

    return 0;
}
```

### Reflecting on the Journey:

Pointers are tricky but also super powerful. The idea that you can directly work with memory addresses is something I had never thought about before. Still need more practice but today was a big step! 💻

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #PointersInC #DynamicMemoryAllocation #ProgrammingJourney #LinkedInLearning
