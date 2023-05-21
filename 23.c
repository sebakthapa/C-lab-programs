// Program: Calculating Combination and Permutation using Factorial Function
// Author: Sebak Thapa

#include <stdio.h>

// Function to calculate factorial of a number
int fact(int n) {
    int result = 1;
    int i;

    for (i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

// Function to calculate combination (nCr)
float combination(int n, int r) {
    int numerator = fact(n);
    int denominator = fact(r) * fact(n - r);
    return (float)numerator / denominator;
}

// Function to calculate permutation (nPr)
float permutation(int n, int r) {
    int numerator = fact(n);
    int denominator = fact(n - r);
    return (float)numerator / denominator;
}

int main() {
    int n, r;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);
	
	if(r>n){
		printf("Invalid data");
		return 0;
	}
    // Calculate and display combination (nCr)
    float comb = combination(n, r);
    printf("Combination C(%d, %d) = %.2f\n", n, r, comb);

    // Calculate and display permutation (nPr)
    float perm = permutation(n, r);
    printf("Permutation P(%d, %d) = %.2f\n", n, r, perm);

    return 0;
}

