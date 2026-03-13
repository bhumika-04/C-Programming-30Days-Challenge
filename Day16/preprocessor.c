#include <stdio.h>

// defining constants using #define
#define PI 3.14
#define MAX 100
#define SQUARE(x) ((x) * (x))

// conditional compilation
#define DEBUG

int main() {
    float radius = 5.0;
    float area;

    area = PI * SQUARE(radius);
    printf("Area of circle: %.2f\n", area);

    printf("Max value allowed: %d\n", MAX);

    int num = 4;
    printf("Square of %d is: %d\n", num, SQUARE(num));

    // this will only print if DEBUG is defined above
    #ifdef DEBUG
        printf("Debug mode is ON\n");
    #endif

    #ifndef RELEASE
        printf("This is not a release build\n");
    #endif

    return 0;
}
