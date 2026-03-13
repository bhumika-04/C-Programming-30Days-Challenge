#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50

struct Student {
    int rollNo;
    char name[50];
    float marks;
    char grade;
};

struct Student students[MAX_STUDENTS];
int totalStudents = 0;

char getGrade(float marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 75) return 'B';
    else if (marks >= 60) return 'C';
    else if (marks >= 45) return 'D';
    else return 'F';
}

void addStudent() {
    if (totalStudents >= MAX_STUDENTS) {
        printf("Cannot add more students!\n");
        return;
    }
    struct Student s;
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]s", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);
    s.grade = getGrade(s.marks);
    students[totalStudents] = s;
    totalStudents++;
    printf("Student added successfully!\n");
}

void displayAll() {
    if (totalStudents == 0) {
        printf("No records found.\n");
        return;
    }
    printf("\n%-10s %-20s %-10s %-5s\n", "Roll No", "Name", "Marks", "Grade");
    printf("----------------------------------------------\n");
    int i;
    for (i = 0; i < totalStudents; i++) {
        printf("%-10d %-20s %-10.2f %-5c\n",
            students[i].rollNo,
            students[i].name,
            students[i].marks,
            students[i].grade);
    }
}

void searchStudent(int rollNo) {
    int i;
    for (i = 0; i < totalStudents; i++) {
        if (students[i].rollNo == rollNo) {
            printf("\nFound!\n");
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("Grade: %c\n", students[i].grade);
            return;
        }
    }
    printf("Student with roll no %d not found.\n", rollNo);
}

void saveToFile() {
    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Could not save file\n");
        return;
    }
    int i;
    for (i = 0; i < totalStudents; i++) {
        fprintf(fp, "%d %s %.2f %c\n",
            students[i].rollNo,
            students[i].name,
            students[i].marks,
            students[i].grade);
    }
    fclose(fp);
    printf("Records saved to students.txt\n");
}

int main() {
    int choice, rollNo;

    printf("=== Student Record System ===\n");

    while (1) {
        printf("\n1. Add Student\n");
        printf("2. Display All\n");
        printf("3. Search Student\n");
        printf("4. Save to File\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &rollNo);
                searchStudent(rollNo);
                break;
            case 4: saveToFile(); break;
            case 5:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
