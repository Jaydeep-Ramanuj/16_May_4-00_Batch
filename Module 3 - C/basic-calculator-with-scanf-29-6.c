#include <stdio.h>

void main(){

int number1, number2;

printf("Enter Number 1: ");
scanf("%d",&number1);
printf("\nEnter Number 2: ");
scanf("%d",&number2);


int sumResult=number1+number2;
int subResult=number1-number2;
int mulResult=number1*number2;
float divResult= (float) number1/number2;
int moduloResult=number1%number2;


printf("\nSummation of %d and %d is: %d",number1,number2,sumResult);
printf("\nSubtraction of %d and %d is: %d",number1,number2,subResult);
printf("\nMultiplication of %d and %d is: %d",number1,number2,mulResult);
printf("\nDivision of %d and %d is: %.1f",number1,number2,divResult);
printf("\nModulo of %d and %d is: %d",number1,number2,moduloResult);
}
