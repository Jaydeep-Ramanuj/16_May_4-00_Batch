#include <stdio.h>

void main(){


    int num1=1;
    int num2=2;
    int num3=3;
    int num4=4;
    int num5=5;

    // Shorthand notation is used when you want to do
    // some operation on left side variable itself with its old value


    int total=num1+num2;

    printf("total: %d",total);

    // total=total+num3;
    total+=num3;
    printf("\ntotal: %d",total);

    //total=total+num4;
    total+=num4;

    printf("\ntotal: %d",total);

    //total=total+num5;
    total+=num5;
    printf("\ntotal: %d",total);


    //total=total-num1;
    //total-=num1;
    //printf("\ntotal: %d",total);

    //total=total*num2;
    //total*=num2;
    //printf("\ntotal: %d",total);

    //total=total/num2;
    //total/= num3;
    //printf("\ntotal: %d",total);

    //total=total%num2;
    total%= num2;
    printf("\ntotal: %d",total);
}
