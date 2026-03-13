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
