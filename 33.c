// Program: String Copy with and without String Handling Functions
// Author: Sebak Thapa

#include <stdio.h>
#include <string.h>

// Function to copy a string without using string handling functions
void stringCopyWithoutFunction(char *source, char *destination) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; 
}

int main() {
    char sourceString[] = "Hello, World!";     
    char destinationString1[100];              
    char destinationString2[100];              

    // Method 1: Copy without using string handling functions
    stringCopyWithoutFunction(sourceString, destinationString1);
    printf("Copied string without using functions: %s\n", destinationString1);

    // Method 2: Copy using string handling function strcpy()
    strcpy(destinationString2, sourceString);
    printf("Copied string using strcpy(): %s\n", destinationString2);

    return 0;
}

