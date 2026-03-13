#include <stdio.h>
#include <string.h>

int main() {
    char name[20] = "Bhumika";

    // strlen - get length
    printf("Length: %d\n", strlen(name));

    // strcpy - copy string
    char copy[20];
    strcpy(copy, name);
    printf("Copied: %s\n", copy);

    // strcat - join strings
    char greeting[30] = "Hello, ";
    strcat(greeting, name);
    printf("Greeting: %s\n", greeting);

    // strcmp - compare strings (0 means equal)
    if (strcmp(name, "Bhumika") == 0) {
        printf("Names match!\n");
    } else {
        printf("Names don't match!\n");
    }

    return 0;
}
