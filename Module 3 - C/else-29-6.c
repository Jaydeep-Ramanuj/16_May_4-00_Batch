#include <stdio.h>

void main(){

int age;
int condition=1;



printf("1");
printf("2");

// Here we are controlling flow of execution

if(condition==1){
    printf("3");
}else{
    printf("4");
    printf("5");
}



printf("\nEnter your age: ");
scanf("%d",&age);

// Syntax

//if(condition){
    // code, it will run only when condition is true
//}else{
    // code, it will run only when condition is false
//}



// Example: check if you can get Indian Driving license

if(age>=18){
    printf("You can get Driving License");
}else{
    printf("You cannot get Driving Licese");
}


}
