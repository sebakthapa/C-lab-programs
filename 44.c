// Program: Write set of strings each of length 40 into a file "string.txt" and display it
// Author: Sebak Thapa

#include <stdio.h>

int main() {
    FILE *file;
    char str[41]; 
    int i;

    // Open the file in write mode
    file = fopen("string.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Write strings into the file
    for (i = 0; i < 5; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(str, sizeof(str), stdin); // Read string from the user

        fputs(str, file); // Write the string to the file
    }

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen("string.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Contents of string.txt:\n");

    // Read and display the contents of the file
    while (fgets(str, sizeof(str), file) != NULL) {
        printf("%s", str);
    }

    // Close the file
    fclose(file);

    return 0;
}

