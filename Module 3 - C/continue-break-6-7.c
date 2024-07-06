#include <stdio.h>


void main(){

int i;

//for(i=1;i<=10;i++){
//    if(i>5){
//        // break, it useful when we want to exit
//        // out of a loop
//        break;
//    }
//    printf("%d\n",i);
//}
//printf("This will printed after loop ends");



for(i=1;i<=10;i++){

    if(i>=5 && i<=7){
        // continue, it useful when we want to skip
        // any iteration
        continue;
    }
    printf("%d\n",i);

}
printf("This will printed after loop ends");

}
