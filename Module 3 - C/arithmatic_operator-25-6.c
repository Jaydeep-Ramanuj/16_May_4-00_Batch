#include <stdio.h>

void main(){

    int a=20;
    int b=30;

printf("a = %d",a);
printf("\nb = %d",b);

// Arithmetic operator (+, -, *, /, %), it will evaluate expression
// based on given operator

int sumResult=a+b;
printf("\nSummation of %d and %d is: %d",a,b,sumResult); // Summation

int subResult=a-b;
printf("\nSubtraction of %d and %d is: %d",a,b,subResult); // Sutraction

int mulResult=a*b;
printf("\nMultipliaction of %d and %d is: %d",a,b,mulResult); // Multiplication

float divResult= (float) a/b;
printf("\nDivision of %d and %d is: %.1f",a,b,divResult); // Division

int moduloResult=  a%b;
printf("\nModulus of %d and %d is: %d",a,b,moduloResult); // Modulus

}
