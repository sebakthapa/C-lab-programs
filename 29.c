// Program: Check Palindrome without using String Functions
// Author: Sebak Thapa

#include <stdio.h>


// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int length = 0;
    int i;

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Compare characters from both ends of the string
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;  // Not a palindrome
        }
    }

    return 1;  // Palindrome
}

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");

    scanf("%s", &str);

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

