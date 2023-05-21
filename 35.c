// Program: Sort String Words in an Array of Pointers
// Author: Sebak Thapa

#include <stdio.h>
#include <string.h>


int main() {
    char* words[3] = {"apple", "orange", "grapes"};
    int i;

    // Print the original words
    printf("Original Words:\n");
    for (i = 0; i < 3; i++) {
        printf("%s\n", words[i]);
    }
    printf("\n");

    // Sort the string words
    int sorted;
    do {
        sorted = 1;
        for (i = 0; i < 3 - 1; i++) {
            if (strcmp(words[i], words[i + 1]) > 0) {
                char* temp = words[i];
                words[i] = words[i + 1];
                words[i + 1] = temp;
                sorted = 0;
            }
        }
    } while (!sorted);

    // Print the sorted words
    printf("Sorted Words:\n");
    for (i = 0; i < 3; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}

