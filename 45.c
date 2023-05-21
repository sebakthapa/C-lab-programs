// Program: Write name, age, and height of a person into a data file "person.txt" and read it 
// Author: Sebak Thapa

#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    FILE *file;
    struct Person person;

    // Open the file in write mode
    file = fopen("person.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Write person data into the file
    printf("Enter name: ");
    scanf("%s", person.name);
    printf("Enter age: ");
    scanf("%d", &person.age);
    printf("Enter height (in meters): ");
    scanf("%f", &person.height);

    fprintf(file, "%s %d %.2f", person.name, person.age, person.height);

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen("person.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

struct Person p1;
    // Read and display the content from the file
    fscanf(file, "%s %d %f", p1.name, &p1.age, &p1.height);
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.2f\n", p1.height);

    // Close the file
    fclose(file);

    return 0;
}

