#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

union Data {
    int intValue;
    float floatValue;
};

enum Days {MON, TUE, WED, THU, FRI, SAT, SUN};

int main() {
    // struct - group different data types together
    struct Person p1;
    strcpy(p1.name, "Bhumika");
    p1.age = 21;
    printf("Name: %s, Age: %d\n", p1.name, p1.age);

    // union - shares memory, only one value at a time
    union Data d;
    d.intValue = 10;
    printf("Int value: %d\n", d.intValue);
    d.floatValue = 3.14; // this overwrites intValue
    printf("Float value: %.2f\n", d.floatValue);

    // enum - named constants
    enum Days today = WED;
    printf("Day number: %d\n", today); // MON=0, TUE=1, WED=2

    return 0;
}
