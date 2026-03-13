#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // argc tells how many arguments
    printf("Number of arguments: %d\n", argc);
    printf("Program name: %s\n", argv[0]);

    if (argc < 3) {
        printf("Please provide name and age as arguments\n");
        printf("Usage: ./program <name> <age>\n");
        return 1;
    }

    char *name = argv[1];
    int age = atoi(argv[2]);  // convert string to int

    printf("Hello, %s!\n", name);
    printf("Your age is: %d\n", age);

    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }

    return 0;
}
