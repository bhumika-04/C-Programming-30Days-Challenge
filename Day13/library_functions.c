#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    // string.h functions
    char str[] = "Hello";
    printf("Length of '%s': %d\n", str, strlen(str));

    char copy[20];
    strcpy(copy, str);
    printf("Copied string: %s\n", copy);

    // math.h functions (compile with -lm)
    printf("sqrt(16) = %.2f\n", sqrt(16));
    printf("pow(2, 3) = %.2f\n", pow(2, 3));
    printf("ceil(4.2) = %.2f\n", ceil(4.2));
    printf("floor(4.8) = %.2f\n", floor(4.8));

    // stdlib.h functions
    printf("abs(-10) = %d\n", abs(-10));
    printf("random number (0-99): %d\n", rand() % 100);

    return 0;
}
