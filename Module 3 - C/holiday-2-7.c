#include <stdio.h>


void main(){

int weekDay=3;
int isHoliday = 0;
int isActivity = 1;

// Example:

// Rule 1: If Sunday, No lecture
// Rule 2: If Holiday, No lecture
// Rule 3: If Activity, Half day
// Rule 4: If Day = Tuesday or Thursday or Saturday, Lecture
// Rule 5: If Day = Monday or Wednesday or Friday, Lab

if(weekDay==1 || isHoliday==1){
    printf("No Lecture");
}else{
    if(isActivity==1){
        printf("Half day");
    }else{
        if(weekDay==3 || weekDay==5 || weekDay==7){
            printf("Lecture");
        }else{
            printf("Lab");
        }
    }
}




}
