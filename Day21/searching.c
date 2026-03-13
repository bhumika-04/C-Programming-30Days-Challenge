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
