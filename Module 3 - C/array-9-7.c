#include <stdio.h>


void main(){

//Array, collection of data of same type.
//It is use to store multiple values in single varibale.
//It's index start from 0

// array declaration

//data_type array_name[array_size];
int numbers[5];


// Array Initialization,

//data_type array_name[array_size] = {item1, item2, item2,...};
int nums[5] = {10,20,30,40,50,60} ;


// array access

//array_name[element_index]

printf("%d",nums[2]);

printf("\n%d + %d = %d",nums[1],nums[3],nums[1]+nums[3]);

}
