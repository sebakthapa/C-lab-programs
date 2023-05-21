// Program:	Write characters into a file 'file.txt'
// Author: Sebak Thapa

#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Open the file in write mode
    file = fopen("file.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter characters (press Enter to stop):\n");

    // Read characters from the keyboard until Enter is pressed
    while ((ch = getchar()) != '\n') {
        // Write the character to the file
        fputc(ch, file);
    }

    // Close the file
    fclose(file);

    printf("Characters written to file.txt successfully.\n");

    return 0;
}

