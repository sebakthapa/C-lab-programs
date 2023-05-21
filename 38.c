// Program: Illustrate passing struct to a function
// Author: Sebak Thapa

#include <stdio.h>
#include <string.h>

// Define the structure
struct student {
    char name[50];
    int age;
};

// Function that accepts a structure as an argument and returns a structure
struct student updateStudent(struct student s) {
    strcpy(s.name, "John");
    s.age = 20;

    return s;
}

int main() {
    struct student stu = {"Alice", 18};

    struct student updatedStu = updateStudent(stu);

    // Display the updated structure values
    printf("Updated Student Information:\n");
    printf("Name: %s\n", updatedStu.name);
    printf("Age: %d\n", updatedStu.age);

    return 0;
}

