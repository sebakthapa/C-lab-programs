// Program: Displaying Patterns
// Author: Sebak Thapa

#include <stdio.h>

int main() {
    int rows = 5,i,j,k;

    printf("Pattern a:\n");
    for (i = 1; i <= rows; i++) {
        for ( j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\nPattern b:\n");
    for ( i = 1; i <= rows; i++) {
        for ( j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
	
	
	int inc;
	int num;
	printf("\nPattern c:\n");
	    for (i=rows; i>0;i--){
	    	 num = 6-i;
	    	 inc=5;
	    	for (j=i; j >0; j--){
	    		
	    		printf("%d", num);
	    		printf("  ");
	    		num += inc;
	    		inc--;
			}
		
		printf("\n");
	}
    
    
    return 0;
}
