#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dynamicArray;
    int size = 5;

    // Dynamic memory allocation
    dynamicArray = (int*)malloc(size * sizeof(int));

    // Check if allocation is successful
    if (dynamicArray != NULL) {
        for (int i = 0; i < size; i++) {
            dynamicArray[i] = i * 2; // Initialize values
            printf("%d ", dynamicArray[i]);
        }

        // Don't forget to free the allocated memory
        free(dynamicArray);
    }

    return 0;
}
