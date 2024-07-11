#include <stdio.h>


void main(){
    int numbers[5];
    int result;

    printf("Enter 5 numbers: ");

    for(int i=0;i<5;i++){
        scanf("%d",&numbers[i]);
    }

    for(int i=0;i<5;i++){
        printf("\n%d: %d",i,numbers[i]);
    }

    for(int i=0;i<5;i++){
        result+=numbers[i];
    }
    printf("\nSum of all given numbers is: %d",result);
}
