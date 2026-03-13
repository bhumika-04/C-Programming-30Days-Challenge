🚀 **Day 21: Searching Algorithms in C!**

Hello Everyone! 👋

Day 21 of my 30 Days of C challenge! Today I learned about Searching Algorithms. 🌐
Searching is something we do all the time — in apps, databases, everywhere. Today I implemented two classic approaches!

### Key Learnings:

1. **Linear Search:**
   - Check each element one by one from the beginning until found.
   - Works on any array — sorted or unsorted.
   - Time complexity: O(n) — worst case checks all elements.

2. **Binary Search:**
   - Works only on sorted arrays.
   - Divides the array in half each time — much faster!
   - Time complexity: O(log n) — much better than linear search.

3. **When to use which?**
   - Small or unsorted data → Linear Search
   - Large sorted data → Binary Search

### Code Snippet - Linear Search and Binary Search:

```c
#include <stdio.h>

// linear search
int linearSearch(int arr[], int n, int target) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // return index where found
        }
    }
    return -1;  // not found
}

// binary search - array must be sorted!
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;  // search in right half
        } else {
            high = mid - 1;  // search in left half
        }
    }
    return -1;  // not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45};
    int n = 8;
    int target = 23;
    int result;

    // linear search
    result = linearSearch(arr, n, target);
    if (result != -1) {
        printf("Linear Search: %d found at index %d\n", target, result);
    } else {
        printf("Linear Search: %d not found\n", target);
    }

    // binary search
    result = binarySearch(arr, n, target);
    if (result != -1) {
        printf("Binary Search: %d found at index %d\n", target, result);
    } else {
        printf("Binary Search: %d not found\n", target);
    }

    // searching for something not in array
    result = binarySearch(arr, n, 99);
    if (result == -1) {
        printf("Binary Search: 99 not found in array\n");
    }

    return 0;
}
```

### Reflecting on the Journey:

Day 21 was very practical! The difference between linear and binary search shows how the right algorithm can make a huge difference in performance. Binary search is so smart — divide and conquer! 💻💡

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #SearchingAlgorithms #BinarySearch #LinearSearch #Algorithms #LinkedInLearning
