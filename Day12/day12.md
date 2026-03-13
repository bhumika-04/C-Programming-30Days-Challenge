# Day 12: Pointers in C — A Deep Dive

Hello Everyone! 👋

Day 12 of my 30 Days of C challenge and today was all about pointers again but in more depth! I first touched pointers on Day 3 but today I really tried to understand them properly.

### Key Learnings:

1. **What is a Pointer?**
   - A pointer stores the memory address of another variable.
   - Declared with `*`: `int *p;`
   - Get the address of a variable using `&`: `p = &num;`
   - Get the value at that address using `*p` (this is called dereferencing).

2. **Pointer Arithmetic:**
   - You can increment a pointer: `p++` moves it to the next memory location.
   - For `int *p`, doing `p+1` moves 4 bytes forward (size of int).
   - This is how arrays work internally!

3. **Pointers and Arrays:**
   - The array name itself is a pointer to the first element.
   - `arr[i]` is the same as `*(arr + i)` — they are equivalent!

4. **NULL Pointer:**
   - Always initialize pointers to `NULL` if not assigning an address right away.
   - Accessing a NULL pointer causes a crash — learned this the hard way!

### Code Snippet - Pointers:

```c
#include <stdio.h>

int main() {
    int num = 42;
    int *p = &num;

    printf("Value: %d\n", *p);           // 42
    printf("Address: %p\n", (void*)p);   // memory address

    // pointer arithmetic with array
    int arr[3] = {10, 20, 30};
    int *ptr = arr; // pointing to first element

    for (int i = 0; i < 3; i++) {
        printf("%d ", *(ptr + i)); // same as arr[i]
    }
    printf("\n");

    return 0;
}
```

### Reflecting on the Journey:

Pointers finally started making more sense today! The connection between arrays and pointers was the thing that cleared up a lot of confusion. Still going to need more practice but I feel much more comfortable now. 💻

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #Pointers #PointerArithmetic #MemoryManagement #LinkedInLearning
