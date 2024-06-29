#include <stdio.h>

void main(){

// Example: check if you can get Indian Driving license

int age;
char nationality;

printf("\nEnter Initial of country: ");
scanf("%c",&nationality);

printf("\nEnter your age: ");
scanf("%d",&age);

// syntax


//if(condition_1){
//    if(condition_2){
//            // code, it will run if both
//            // condition_1 and condition_2 is True
//    }else{
//            // code, it will run if condition_1 is True,
//            // But condition_2 is False
//        }
//}else{
//    if(condition_3){
//            // code, it will run if condition_1 is False,
//            // But condition_3 is True
//    }else{
//            // code, it will run if both condition_1 is False
//        }
//}




// Nested if-else
if(age>=18){
        if(nationality=='i'||nationality=='I'){
            printf("You can get Driving License");
        }else{
            printf("You can get Driving License but not Indian");
        }
}else{
    printf("You cannot get Driving License");
}

}

