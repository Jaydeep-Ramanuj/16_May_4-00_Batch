#include <stdio.h>


void main(){

int result = a + b; // Expression

// here, result is taking value from a+b
// here, + is addition operator and = is assignment operator
// here, a and b is operands on which operator does its job


// Assignment operator (=), it gives value to the variable.
// Remember it will only gives values from right to left

int a=21; // Assignment operator
int b=20;



printf("a = %d",a);
printf("\nb = %d",b);


// Relational operator (<, <=, >, >=, ==, !=), it checks for relations and if it is true

int isLessThan= a < b;
printf("\nIs a less than b (a<b)? : %d",isLessThan);

int isGreaterThan= a > b;
printf("\nIs a Greater than than b (a>b)? : %d",isGreaterThan);

int isLessThanOrEqualTo= a <= b;
printf("\nIs a Less than or equal to b (a<=b)? : %d",isLessThanOrEqualTo);

int isGreaterThanOrEqualTo= a >= b;
printf("\nIs a Greater than or equal to b (a>=b)? : %d",isGreaterThanOrEqualTo);

}
