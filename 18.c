// Program: program to print Fibonacci Series up to 300
// Author: Sebak Thapa

#include <stdio.h>
int main() {
    int term1 = 0, term2 = 1, nextTerm = 0;

    printf("Fibonacci Series up to the last term less than or equal to 300:\n");

	  // Printing the first two terms
    printf("%d, %d, ", term1, term2);

	// Calculating the next term
    nextTerm = term1 + term2;

    while (nextTerm <= 300) {
        printf("%d, ", nextTerm);

        term1 = term2;
        term2 = nextTerm;
        nextTerm = term1 + term2;
    }

    printf("\n");

    return 0;
}
