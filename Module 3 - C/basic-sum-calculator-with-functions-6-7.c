#include <Stdio.h>

void main(){

int num1,num2, resultOfSum, resultOfSub;

printf("\nEnter number 1: ");
scanf("%d",&num1);
printf("\nEnter number 2: ");
scanf("%d",&num2);

// function call in seperate line
resultOfSum=sum(num1,num2);

printf("Result of %d + %d = %d ",num1, num2, resultOfSum);

// function call from another statement
printf("Result of %d - %d = %d ",num1, num2, sub(num1,num2));
printf("Result of %d * %d = %d ",num1, num2, mul(num1,num2));
//printf("Result of %d / %d = %.2f ",num1, num2, (float) div(num1,num2));

}


int sum(int num1, int num2){
int result=num1+num2;
return result;
}

int sub(int num1,int num2){
return num1-num2;
}


int mul(int num1,int num2){
return num1*num2;
}

//float div(int num1,int num2){
//    printf("%f",num1/num2);
//return (float) num1/num2;
//}

