#include <stdio.h>

void main(){

int num=10;

printf("Num: %d",num);

// normal pointer, it points a variable address
int *ptr;
// double pointer, it points a pointer
int **pop;

ptr=&num;

printf("\nptr storing address: %p",ptr);
printf("\nptr storing value: %d",*ptr);

pop=&ptr;

printf("\npop storing address: %p",pop);
printf("\npop storing value: %d",*pop);

**pop=30;
printf("\nNum: %d",num);

}
