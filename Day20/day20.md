🚀 **Day 20: Sorting Algorithms in C!**

Hello Everyone! 👋

Day 20 of my 30 Days of C challenge — halfway through! 🎉 Today I learned Sorting Algorithms. 🌐
Sorting is one of the most fundamental things in programming and I had a lot of fun implementing these!

### Key Learnings:

1. **Bubble Sort:**
   - Repeatedly compares adjacent elements and swaps them if they are in the wrong order.
   - Easy to understand but not very efficient for large arrays.

2. **Selection Sort:**
   - Finds the minimum element from the unsorted part and puts it at the beginning.
   - Makes fewer swaps than bubble sort.

3. **Insertion Sort:**
   - Builds the sorted array one element at a time, like sorting playing cards in hand.

4. **Time Complexity (basic understanding):**
   - All three are O(n²) in worst case — meaning for large data they are slow.

### Code Snippet - Bubble Sort and Selection Sort:

```c
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
```

### Reflecting on the Journey:

Day 20 milestone reached! 🎉 Sorting algorithms made me think about how important algorithm efficiency is. Same result but some algorithms take much longer than others. Very interesting! 💻💡

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #SortingAlgorithms #BubbleSort #SelectionSort #Algorithms #LinkedInLearning
