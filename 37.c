// Program: Create structure named company and display its value
// Author: Sebak Thapa

#include <stdio.h>

// Define the structure
struct company {
    char name[50];
    char address[100];
    char phone[15];
    int noOfEmployee;
};

int main() {
    struct company comp;

    // Read input values
    printf("Enter company name: ");
    scanf("%s", comp.name);

    printf("Enter company address: ");
    scanf("%s", comp.address);

    printf("Enter company phone: ");
    scanf("%s", comp.phone);

    printf("Enter number of employees: ");
    scanf("%d", &comp.noOfEmployee);

    // Display the member values
    printf("\nCompany Information:\n");
    printf("Name: %s\n", comp.name);
    printf("Address: %s\n", comp.address);
    printf("Phone: %s\n", comp.phone);
    printf("Number of Employees: %d\n", comp.noOfEmployee);

    return 0;
}

