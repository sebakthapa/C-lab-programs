// Program: Adding Two Matrices of Order 3x2
// Author: Sebak Thapa

#include <stdio.h>

// Function to read a matrix
void readMatrix(int matrix[][2], int rows) {
    int i, j;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to add two matrices
void addMatrices(int matrix1[][2], int matrix2[][2], int result[][2]) {
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][2], int rows) {
    int i, j;

    printf("Resultant Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[3][2], matrix2[3][2], result[3][2];

    printf("Enter elements for the first matrix:\n");
    readMatrix(matrix1, 3);

    printf("Enter elements for the second matrix:\n");
    readMatrix(matrix2, 3);

    // Add the matrices
    addMatrices(matrix1, matrix2, result);

    // Display the resultant matrix
    displayMatrix(result, 3);

    return 0;
}

