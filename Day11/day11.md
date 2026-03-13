# Day 11: Structures, Unions, and Enums in C

Hello Everyone! 👋

Day 11 of my 30 Days of C challenge and today I learned about structures, unions, and enums. These are ways to organize data in C and they are really useful when you want to group related information together!

### Key Learnings:

1. **Structures (`struct`):**
   - A structure lets you group different data types under one name.
   - For example, a `Student` struct can have a name, roll number, and marks all together.
   - Access members using the dot operator `.`

2. **Unions (`union`):**
   - Similar to struct but all members share the same memory location.
   - Only one member can hold a value at a time.
   - Takes memory equal to the largest member — so it is more memory efficient than struct.

3. **Enums (`enum`):**
   - Used to create a set of named integer constants.
   - Makes code more readable — instead of using `0, 1, 2` for days, use `MON, TUE, WED`.

### Code Snippet - Struct, Union, and Enum:

```c
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
    // using struct
    struct Person p1;
    strcpy(p1.name, "Bhumika");
    p1.age = 21;
    printf("Name: %s, Age: %d\n", p1.name, p1.age);

    // using union - only one value at a time
    union Data d;
    d.intValue = 10;
    printf("Int value: %d\n", d.intValue);
    d.floatValue = 3.14;
    printf("Float value: %.2f\n", d.floatValue);

    // using enum
    enum Days today = WED;
    printf("Day number: %d\n", today); // WED = 2 (starts from 0)

    return 0;
}
```

### Reflecting on the Journey:

Structures are super useful! I can already imagine using them for storing student records or employee data. The difference between struct and union (shared memory) was a bit confusing at first but makes sense now. 💻

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #Structures #Unions #Enums #LinkedInLearning
