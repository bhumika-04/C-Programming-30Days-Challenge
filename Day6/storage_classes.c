#include <stdio.h>

void countCalls() {
    // auto variable - resets every time function is called
    int autoCount = 0;
    autoCount++;

    // static variable - keeps its value between calls
    static int staticCount = 0;
    staticCount++;

    printf("auto: %d | static: %d\n", autoCount, staticCount);
}

int main() {
    // calling the function 3 times to see the difference
    countCalls();
    countCalls();
    countCalls();
    return 0;
}
