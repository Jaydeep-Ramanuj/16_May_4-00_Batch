#include <stdio.h>


void main(){

// pointer, it is special type of variable
// that's responsible to store variable address.

// address of operator (&), it gives address of given variable
// value operator (*), it gives value stored at given address

int num=10;

printf("num: %d",num);

// pointer declaration

// syntax

data_type_of_value_stored_at_address_pointer_points pointer_name;

int *ptr;
ptr=&num;

printf("\naddress ptr pointing to: %p",ptr);
printf("\nvalue at address ptr pointing: %d",*ptr);

*ptr=20;

printf("\nnum: %d",num);

}
