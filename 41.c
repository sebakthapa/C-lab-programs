// Program: Create a structure and store information about book
// Author: Sebak Thapa

#include <stdio.h>

struct book {
    char title[50];
    char author[50];
    int publicationYear;
};

int main() {
    struct book b;
    struct book *ptr;

    // Assign the address of the structure to the pointer
    ptr = &b;

    // Read book information using the pointer
    printf("Enter the title of the book: ");
    scanf("%s", ptr->title);

    printf("Enter the author of the book: ");
    scanf("%s", ptr->author);

    printf("Enter the publication year of the book: ");
    scanf("%d", &(ptr->publicationYear));

    // Display book information using the pointer
    printf("\nBook Information:\n");
    printf("Title: %s\n", ptr->title);
    printf("Author: %s\n", ptr->author);
    printf("Publication Year: %d\n", ptr->publicationYear);

    return 0;
}

