#include <stdio.h>

void main(){
    int choice,num1,num2;
    float result;

printf("Welcome !");

printf("\nEnter first number: ");
scanf("%d",&num1);
printf("\nEnter second number: ");
scanf("%d",&num2);

printf("\nChoose your operation from below...");

printf("\n1. Addition");
printf("\n2. Subtraction");
printf("\n3. Multiplication");
printf("\n4. Division");
printf("\n5. Modulo");

printf("\nEnter your number of your choice: ");
scanf("%d",&choice);

switch(choice){
    case 1:
        result = (float) num1 + num2;
        printf("Summation of %d and %d is : %.1f",num1,num2,result);
        break;
    case 2:
        result = (float) num1 - num2;
        printf("Subtraction of %d and %d is : %.1f",num1,num2,result);
        break;
    case 3:
        result = (float) num1 * num2;
        printf("Multiplication of %d and %d is : %.1f",num1,num2,result);
        break;
    case 4:
        result = (float) num1 / num2;
        printf("Divison of %d and %d is : %.2f",num1,num2,result);
        break;
    case 5:
        result = (int) num1 % num2;
        printf("Modulo of %d and %d is : %f",num1,num2,result);
        break;
    default:
        printf("Invalid Input");
}

}
