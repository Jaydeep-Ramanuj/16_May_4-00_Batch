#include <stdio.h>


// function declaration, it is used to declare that the specific function exists
// with provided information

int sumOf10Numbers(int);
int sumOfTwoNumbers(int,int);

void main(){

// function call, it used to run specific function,
// optionally with arguments

 // sumOf10Numbers(45);

 int sum = sumOfTwoNumbers(6,12);

 if(sum>30){
    printf("Greater than 30");
 }else{
     printf("Less than or equal to 30");
 }
}

// return_type fuction_name (param1, param2){
// code to execute
// return (optional)
// }




// function definition,which is used to define what function does

int sumOf10Numbers(int number){
    int result;
    int i;
    for(i=0;i<=number;i++){
        result+=i;
        printf("\n%d",i);
    }
    printf("\nResult = %d",result);
}


int sumOfTwoNumbers(int num1, int num2){
    int result;
    result = num1+num2;
    printf("%d\n",result);
    return result;
}




