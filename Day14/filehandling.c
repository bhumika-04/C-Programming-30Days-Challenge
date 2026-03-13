#include <stdio.h>

int main() {
    FILE *fp;

    // writing to a file
    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("Could not open file\n");
        return 1;
    }
    fprintf(fp, "Name: Bhumika\n");
    fprintf(fp, "Roll No: 21\n");
    fclose(fp);

    printf("Data written to file successfully!\n");

    // now reading from the same file
    char line[100];
    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    printf("\nReading from file:\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);

    return 0;
}
