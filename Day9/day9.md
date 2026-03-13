# Day 9: Arrays in C — 1D, 2D and Multidimensional

Hello Everyone! 👋

Day 9 of my 30 Days of C challenge and today I learned about arrays! This is one of the most used concepts in programming and today I finally understood how arrays work in C.

### Key Learnings:

1. **1D Arrays:**
   - An array stores multiple values of the same type in a single variable.
   - Indexing starts from 0 — so the first element is `array[0]`.
   - Size of array must be declared at the time of creation.

2. **Traversing an Array:**
   - Used a `for` loop to go through each element of an array.
   - This is the most common way to access all elements.

3. **2D Arrays:**
   - Like a table or matrix — has rows and columns.
   - Declared as `int matrix[rows][cols]`.
   - Need nested loops to traverse rows and columns.

4. **Multidimensional Arrays:**
   - Can go beyond 2D — like a 3D array `int cube[2][3][4]`.
   - Gets complex quickly but useful for things like grids and game boards.

### Code Snippet - 1D, 2D, and 3D Arrays:

```c
#include <stdio.h>

int main() {
    // 1D array
    int numbers[5] = {1, 2, 3, 4, 5};
    printf("Third element: %d\n", numbers[2]);

    // 2D array (like a 2x3 table)
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("Row 0, Col 1: %d\n", matrix[0][1]);

    // traversing 2D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

### Reflecting on the Journey:

Arrays make so much sense now! The indexing from 0 always confused me before but after practicing today it feels natural. 2D arrays for matrices is something I can already see using in future projects. 💻

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #Arrays #2DArrays #DataStructures #LinkedInLearning
