#include <stdio.h>

// fibonacci using recursion
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// tower of hanoi
void towerOfHanoi(int n, char source, char destination, char helper) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, helper, destination);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, helper, destination, source);
}

int main() {
    int i;

    // print first 10 fibonacci numbers
    printf("Fibonacci series: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n\n");

    // tower of hanoi with 3 disks
    printf("Tower of Hanoi with 3 disks:\n");
    towerOfHanoi(3, 'A', 'C', 'B');

    return 0;
}
