#include <stdio.h>


void main(){

int age=21;
float height=6.2;

int amount=10000;
float deposit=52.33;

float result=amount + deposit;

printf("Age is : %d",age);
printf("\nHeight is : %.1f",height);

printf("\n");

// explicit type conversion
//printf("\nResult is: %d",(int) result);

printf("\nAmount is: %.2f", (float) amount);

printf("\nDeposit is: %d", (int) deposit); // lossy conversion
}
