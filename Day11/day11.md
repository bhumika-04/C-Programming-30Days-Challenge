🚀 **Day 11: Unraveling Structures, Unions, and Enums in C!**

Hello Everyone! 👋

On Day 11 of my 30 Days of C programming challenge, I embarked on a journey through the fascinating realms of structures, unions, and enums. 🌐

### Key Learnings:

1. **Structures in C:**
   - Explored the concept of structures, a powerful feature for bundling different data types under one name.

2. **Declaring and Accessing Structure Members:**
   - Mastered the syntax for declaring structures and accessing their individual members, enhancing data organization.

3. **Unions in C:**
   - Delved into unions, understanding how they provide a way to use the same memory location for different types of data.

4. **Enums in C:**
   - Explored enums, a convenient way to create named constant values, improving code readability.

### Code Snippet - Navigating Structures, Unions, and Enums:

```c
#include <stdio.h>

// Example of defining a structure
struct Person {
    char name[50];
    int age;
};

// Example of defining a union
union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

// Example of defining an enum
enum Days {MON, TUE, WED, THU, FRI, SAT, SUN};

int main() {
    // Example of declaring and accessing a structure
    struct Person person1;
    strcpy(person1.name, "Bhumika");
    person1.age = 22;
    printf("Person: %s, Age: %d\n", person1.name, person1.age);

    // Example of declaring and accessing a union
    union Data data1;
    data1.intValue = 10;
    printf("Value in union: %d\n", data1.intValue);
    data1.floatValue = 3.14;
    printf("Value in union: %.2f\n", data1.floatValue);

    // Example of declaring and accessing an enum
    enum Days today = WED;
    printf("Today is: %d\n", today);

    return 0;
}
```

### Reflecting on the Journey:

Day 11 was an exploration of structures, unions, and enums in C, unlocking new ways to organize and represent data. These concepts bring flexibility and clarity to my programming toolbox! 💻💡

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #Structures #Unions #Enums #ProgrammingJourney #LinkedInLearning

---

Feel free to personalize it further based on your experience and insights. Keep up the great work! 🌟
