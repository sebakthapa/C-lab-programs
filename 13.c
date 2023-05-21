// Program to demonstrate the differences among getch(), getche(), getchar() and 
//the difference of scanf() & gets(), printf() & puts().
//author:Sebak Thapa

#include <stdio.h>
#include <conio.h>

int main() {
	printf("getch()\n");
	printf("The 'getch()' function prompts the user for a character entry\n");
	printf("The getch() function is called. Press any key to proceed\n");
    getch(); 
	printf("\n\n");
	
	printf("getche()\n");
	printf("The 'getche()' function prompts the user for a character entry and ecohes(displays) the entered character on the screen\n");
	printf("The getche() function is called. Press any key to proceed\n");
    getche();
    printf("\nThis was the character pressed  by you");
	printf("\n\n");
	
	printf("getchar()\n");
	printf("The 'getchar()' function is same like getche() function but a user need to press enter afterwards\n");
	printf("The getchar() function is called. Press a key and press enter to proceed\n");
    char a = getchar(); 
	printf("You just entered: %c", a);  
	printf("\n\n");
//	
	char name[20];
	char collegename[200];
	
	//using scanf to read input
	printf("Name: ");
	scanf("%s", name);
	fflush (stdin);

//	display using printf
	printf("Your name is: %s", name);

	//gets to read input
	printf("\n\nAddress: ");
	gets(collegename);
	//display using puts
	puts(collegename);
	
    return 0;
}
