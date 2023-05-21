// Program:	Read characters from file "file.txt"
// Author: Sebak Thapa

#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int count = 0;

    // Open the file in read mode
    file = fopen("file.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Read characters from the file and count the number of characters
    while ((ch = fgetc(file)) != EOF) {
    	printf("%c", ch);
        count++;
    }

    // Close the file
    fclose(file);

    printf("\n\nNumber of characters in the file: %d\n", count);

    return 0;
}

