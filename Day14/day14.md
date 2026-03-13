🚀 **Day 14: File Handling in C!**

Hello Everyone! 👋

Day 14 of my 30 Days of C challenge and today I explored something really useful — File Handling! 🌐
I always wondered how programs save and read data even after closing, and today I finally understood it.

### Key Learnings:

1. **What is File Handling?**
   - Files let us store data permanently on disk. Without files, all data is lost when the program ends.

2. **Opening and Closing a File:**
   - Used `fopen()` to open a file and `fclose()` to close it. Always close the file after use!

3. **Writing to a File:**
   - Used `fprintf()` to write data into a file, just like `printf()` but for files.

4. **Reading from a File:**
   - Used `fscanf()` and `fgets()` to read data back from a file.

5. **File Modes:**
   - `"r"` → read, `"w"` → write (creates new or overwrites), `"a"` → append

### Code Snippet - Writing and Reading a File:

```c
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
```

### Reflecting on the Journey:

Day 14 opened up a whole new concept for me — now I can actually save data to files and read them back. This feels very practical and useful for real programs! 💻💡

Stay tuned for more updates on my 30 Days of C journey! 🚀
#30DaysOfC #CProgramming #FileHandling #ProgrammingJourney #LinkedInLearning
