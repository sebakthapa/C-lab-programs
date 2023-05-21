// Program: Read data from 12 students and display it
// Author: Sebak Thapa

#include <stdio.h>

struct student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float averageMarks;
};

int main() {
    struct student students[12];
    int i;

    // Read student details
    for (i = 0; i < 12; i++) {
        printf("\nStudent %d Details:\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &(students[i].rollNo));

        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter Address: ");
        scanf("%s", students[i].address);

        printf("Enter Age: ");
        scanf("%d", &(students[i].age));

        printf("Enter Average Marks: ");
        scanf("%f", &(students[i].averageMarks));
    }

    // Display student details
    printf("\nStudent Details:\n");
    for (i = 0; i < 12; i++) {
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("Age: %d\n", students[i].age);
        printf("Average Marks: %.2f\n", students[i].averageMarks);
        printf("\n");
    }

    return 0;
}

