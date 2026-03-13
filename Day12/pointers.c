#include <stdio.h>

int main() {
    int num = 42;
    int *p = &num; // p stores the address of num

    printf("Value of num: %d\n", num);
    printf("Value via pointer: %d\n", *p);   // dereferencing
    printf("Address stored in p: %p\n", (void*)p);

    // modifying value through pointer
    *p = 100;
    printf("num after *p = 100: %d\n", num);

    // pointer arithmetic with array
    int arr[3] = {10, 20, 30};
    int *ptr = arr; // array name is a pointer to first element

    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d\n", i, *(ptr + i)); // same as arr[i]
    }

    return 0;
}
