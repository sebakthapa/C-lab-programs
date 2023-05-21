//Program: Copy the contents of one file to another
// Author: Sebak Thapa

#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char character;

    // Open the source file in read mode
    sourceFile = fopen("person.txt", "r");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(sourceFile); // Close the source file
        return 1;
    }

    // Read each character from the source file and write to the destination file
    while ((character = fgetc(sourceFile)) != EOF) {
        fputc(character, destinationFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}

