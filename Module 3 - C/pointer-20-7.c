#include <stdio.h>


void main(){

int num1=1000;
int num2=2000;

 sum(&num1,&num2);

}


void sum(int *num1,int *num2){
    printf("\nnum1 value: %d",*num1);
    printf("\nnum2 value: %d",*num2);
        int result=*num1+*num2;
    printf("\nresult is: %d",result);
}
