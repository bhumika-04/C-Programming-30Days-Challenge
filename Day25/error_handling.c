#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return -1;
    }
    return a / b;
}

int main() {
    int result;

    // basic error handling with return value
    result = divide(10, 2);
    if (result != -1) {
        printf("10 / 2 = %d\n", result);
    }

    result = divide(10, 0);
    if (result == -1) {
        printf("Could not divide\n");
    }

    // errno and perror example - trying to open a file that doesn't exist
    FILE *fp = fopen("file_that_doesnt_exist.txt", "r");
    if (fp == NULL) {
        printf("Error number: %d\n", errno);
        perror("Error opening file");
        printf("Error message: %s\n", strerror(errno));
    }

    return 0;
}
