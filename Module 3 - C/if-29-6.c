#include <stdio.h>


void main(){

int condition=2;

// syntax

// if(condition){
    // code, it will execute only if above
    // mentioned condition is true
// }


printf("1");
printf("2");

// Here we are controlling flow of execution
if(condition==1){
    printf("3");
}
printf("4");
printf("5");



// Example: check if you can get Indian Driving license

int age;
char nationality;

printf("\nEnter Initial of country: ");
scanf("%c",&nationality);

printf("\nEnter your age: ");
scanf("%d",&age);


// single condition
if(age>=18){
    printf("\nYou can get Driving license");
}


// multiple condition with logical operators
if(age>=18 && (nationality=='i' || nationality=='I')){
    printf("\nYou can get Indian Driving license");
}


}
