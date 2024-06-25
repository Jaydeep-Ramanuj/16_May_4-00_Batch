#include <stdio.h>

void main(){

    int a=20;
    int b=30;
    int c=60;
printf("a = %d",a);
printf("\nb = %d",b);
printf("\nc = %d",c);

// True is denoted by 1
// False is denoted by 0

//AND operator (&&),
//it gives true if and only if all conditions are true


// True True => True
// True False => False
// False True => False
// False False => False

int a_LessThan_b=(a<b);
int b_GreaterThan_c=(b>c);

printf("\nIs a less than b (a<b)? : %d",a_LessThan_b);
printf("\nIs b greater than c (b>c)? : %d",b_GreaterThan_c);

//printf("\nAND Operator :: (a<b)&&(b>c): %d",(a<b)&&(b>c)); // AND operator



//OR operator (||),
//it gives true if any of the conditions are true


// True True => True
// True False => True
// False True => True
// False False => False

// printf("\nOR Operator :: (a<b)||(b>c): %d",(a<b)||(b>c)); // OR operator

// NOT operator (!),
// it gives true if condition is false,
// it gives false if condition is true

// True => False
// False => True

int isNotLessThan= !(a<b);
printf("\nIs a not less than b ? : %d",isNotLessThan); // NOT operator

}
