#include <stdio.h>

int main() {
    // 1D array
    int numbers[5] = {1, 2, 3, 4, 5};
    printf("Third element: %d\n", numbers[2]);

    // loop through 1D array
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // 2D array - like a table with 2 rows and 3 columns
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("Row 0, Col 1: %d\n", matrix[0][1]);

    // traverse 2D array with nested loops
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
