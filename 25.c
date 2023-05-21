// Program: Creating and Printing an Array of 5 Integers
// Author: Sebak Thapa

#include <stdio.h>

int main() {
    int arr[5]; // One-dimensional array of 5 integers
    int i;

    // Assign values to each element of the array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // Print the elements of the array
    printf("Array Elements: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

