#include <stdio.h>

void main(){

    int age;
    char status="D";
    int ticketPrice=100;

// Example: Bus Conductor example

// Rules,
// 1. If age > 8, then full ticket
// 2. If age > 8, but status='M', then ticket - 10
// 3. If age > 8, but status='F', then ticket - 15
// 4. If age > 8, but status='D', then ticket - 25
// 5. If age < 8, then half ticket
// 6. If age < 8, but also age < 3 then Free ticket

    printf("\nEnter your Status: ");
    scanf("%c",&status);
    printf("\nEnter your age: ");
    scanf("%d",&age);

    if(age<8){
        if(age<=3){
            printf("\nFree ticket: 0 Rs");
        }else{
            printf("\nHalf ticket: %d",ticketPrice/2);
        }
    }else{
        if(status=='D'){
            printf("25 Rs off: %d", ticketPrice-25);
        }
        if(status!='D'&& status=='F'){
            printf("15 Rs off: %d", ticketPrice-15);
        }
        if(status!='D'&& status!='F'&& status=='M'){
            printf("10 Rs off: %d", ticketPrice-10);
        }
        if(status!='D'&& status!='F'&& status!='M'){
            printf("Full Ticket: %d", ticketPrice);
        }
    }

}
