// Program to illustrate the use of macros (preprocessor directives)
//author:Sebak Thapa

#include <stdio.h>
#define sum(a,b) (a+b)
#define mult(a,b) (a*b)
#define sub(a,b) (a/b)

int main() {
    int a=8, b=4;
    float c;
    const float PI = 3.1414;
    
    c = PI * mult(a,b);
    printf("Multiplication: %f\n", c);

	c = PI * sum(a,b);
    printf("Addition: %f\n", c);
	
	c = PI * sub(a,b);
    printf("Subtraction: %f\n", c);	    
	
    return 0;
}
