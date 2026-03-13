#include <stdio.h>

// recursive factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num = 5;

    // for loop - print 1 to num
    for (int i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // do-while loop
    int counter = 1;
    do {
        printf("Counter: %d\n", counter);
        counter++;
    } while (counter <= 3);

    // switch statement
    int day = 3;
    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        default: printf("Other day\n");
    }

    // recursion
    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}
