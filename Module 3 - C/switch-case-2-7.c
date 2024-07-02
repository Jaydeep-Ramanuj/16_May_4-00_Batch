#include <stdio.h>


void main(){

int weekday;
printf("Enter weekday: ");
scanf("%d",&weekday);

//if(weekday==1){
//    printf("Sunday");
//}else if(weekday==2){
//    printf("Monday");
//}else if(weekday==3){
//    printf("Tuesday");
//}else if(weekday==4){
//    printf("Wednesday");
//}else if(weekday==5){
//    printf("Thursday");
//}else if(weekday==6){
//    printf("Friday");
//}else if(weekday==7){
//    printf("Saturday");
//}else{
//    printf("Oops!. Wrong value");
//}

// Syntax

//switch(key){
//case value1:
//    code;
//    break;
//case value2:
//    code;
//    break;
//    |
//    |
//    |
//default:
//    code;
//}


switch(weekday){
    case 0:
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Oops!. Wrong value");
    }

}
