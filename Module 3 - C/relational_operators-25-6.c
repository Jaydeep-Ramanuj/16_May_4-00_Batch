#include <stdio.h>

void main(){

int a=25;
int b=20;


printf("a = %d",a);
printf("\nb = %d",b);

// True is denoted by 1
// False is denoted by 0


// Relational operator (<, <=, >, >=, ==, !=), it checks for relations and if it is true

int isLessThan= a < b; // less than operator
printf("\nIs a less than b (a<b)? : %d",isLessThan);

int isGreaterThan= a > b; // greater than operator
printf("\nIs a Greater than than b (a>b)? : %d",isGreaterThan);

int isLessThanOrEqualTo= a <= b; // less than or equal to operator
printf("\nIs a Less than or equal to b (a<=b)? : %d",isLessThanOrEqualTo);

int isGreaterThanOrEqualTo= a >= b; // greater than or equal to operator
printf("\nIs a Greater than or equal to b (a>=b)? : %d",isGreaterThanOrEqualTo);

int isEqualTo = a == b; // equal to operator
printf("\nAre a and b equal (a==b)? : %d ",isEqualTo);

int isNotEqualTo = a != b; // not equal to operator
printf("\nAre a and b Not equal (a!=b)? : %d ",isNotEqualTo);


}
