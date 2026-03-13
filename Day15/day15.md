🚀 **Day 15: Dynamic Memory Allocation in C!**

Hello Everyone! 👋

Day 15 of my 30 Days of C challenge! Today I went deeper into memory — Dynamic Memory Allocation. 🌐
I had briefly touched pointers earlier but today I actually understood how memory is allocated at runtime!

### Key Learnings:

1. **Why Dynamic Memory?**
   - Sometimes we don't know the size of data at compile time. Dynamic memory lets us allocate memory while the program is running.

2. **malloc():**
   - Allocates a block of memory. Returns a pointer to it. The memory is uninitialized (has garbage values).

3. **calloc():**
   - Similar to malloc but initializes all bytes to 0. Takes number of elements and size.

4. **realloc():**
   - Resizes previously allocated memory. Very useful when you need more space.

5. **free():**
   - Always free memory after use! If not, it causes memory leaks.

### Code Snippet - Using malloc, calloc, realloc and free:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    // using malloc to allocate memory
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // using realloc to add more space
    arr = (int*) realloc(arr, (n + 2) * sizeof(int));
    arr[n] = 100;
    arr[n + 1] = 200;

    printf("After realloc: ");
    for (i = 0; i < n + 2; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // always free memory!
    free(arr);
    printf("Memory freed successfully\n");

    return 0;
}
```

### Reflecting on the Journey:

Day 15 made me realize how important memory management is in C. Unlike Java or Python, here we have to manually manage memory — and it's actually very powerful! 💻💡

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #DynamicMemory #malloc #calloc #MemoryManagement #LinkedInLearning
