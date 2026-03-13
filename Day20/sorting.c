#include <stdio.h>

// bubble sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// selection sort
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // swap minimum with first element
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;

    printf("Original array: ");
    printArray(arr1, n);

    bubbleSort(arr1, n);
    printf("After Bubble Sort: ");
    printArray(arr1, n);

    int arr2[] = {64, 25, 12, 22, 11};
    int m = 5;

    printf("\nOriginal array: ");
    printArray(arr2, m);

    selectionSort(arr2, m);
    printf("After Selection Sort: ");
    printArray(arr2, m);

    return 0;
}
