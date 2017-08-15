#include<stdio.h>
#include<limits.h>
#include<float.h>

#define LENGTH 10
#define WIDTH 10
#define NEWLINE '\n'

int main(){
	
	printf("=================================================\n");
	printf("Reserved Keywords \n");
	printf("=================================================\n");
	printf("auto\t\t else\t\t long\t\t switch \n");
	printf("break\t\t enum\t	register\t typedef \n");
	printf("case\t\t extern\t	return\t\t union \n");
	printf("char\t\t float\t\t short\t\t unsigned \n");
	printf("const\t\t for\t\t signed\t\t void \n");
	printf("continue\t goto\t\t sizeof\t\t volatile \n");
	printf("default\t\t if\t\t static\t\t while \n");
	printf("do\t\t int\t\t struct\t\t _Packed \n");
	printf("double\t\t \n");
	printf("\n");
	
	printf("=================================================\n");
	printf("Print Formats \n");
	printf("=================================================\n");	
	printf("Color %s, number1 %d, number2 %05d, hex %#x, float %5.2f, unsigned value %u.\n",
       "red", 123456, 89, 255, 3.14159, 250);
    printf("\n");
    
    printf("=================================================\n");
	printf("Variables \n");
	printf("=================================================\n");	    
    int a, b;
    int c;
    float f;
    
    a = 10;
    b = 20;
    f = 50.0/30.0;
    
    printf("Addition : %d \n", a + b);
    printf("Subtraction : %d \n", a - b);
    printf("Multiplication : %d \n", a * b);
    printf("Division : %d \n", a / b);
    printf("Float Division : %f \n", f);
    printf("Mod : %d \n", a%b);
    
    printf("\n");
    
    printf("=================================================\n");
	printf("#Define \n");
	printf("=================================================\n");	
    printf("value of area : %d", LENGTH * WIDTH);
    printf("%c", NEWLINE);
    
    printf("\n");
    
    
       
	return 0;
}