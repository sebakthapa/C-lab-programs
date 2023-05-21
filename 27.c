// Program: Calculating the Sum of Elements in an Array
// Author: Sebak Thapa

#include <stdio.h>

// Function to calculate the sum of elements in an array
int calculateSum(int arr[], int size) {
    int sum = 0;
    int i;

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int array[] = {5, 10, 15, 20, 25}; // Array of integers
    int size = sizeof(array) / sizeof(array[0]);

    int sum = calculateSum(array, size);

    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}

