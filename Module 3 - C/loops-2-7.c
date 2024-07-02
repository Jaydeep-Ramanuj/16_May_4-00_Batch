#include <stdio.h>

void main(){

// Syntax

//for(initialization; condition; increment/decrement){
//    // Code you want to run multiple time
//}

//int count;
//for(count=1;count<=1008;count++){
//    printf("\nRam %d",count);
//}
//printf("\nEnd");

int result;
int num;
int oldValue;
printf("Enter your number: ");
scanf("%d",&num);

for(int count=1;count<=num;count++){
    oldValue=result;
    result= result + count;
    printf("\n %d + %d = %d",oldValue,count,result);
}
printf("\n Sum of %d values is: %d",num,result);

}
