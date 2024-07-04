#include <stdio.h>

void main(){
// initialization;
//  while(condition){
//  Code you want to run multiple time
// increment/decrement;
//}

int result=0;
int counter=0;
int oldResult;
   while(counter<10){
        oldResult=result;
        result+=counter+1;
   printf("%d + %d = %d\n",oldResult,counter+1, result);
        counter++;
    }





//    int isStopMessage=1;
//
//    while(isStopMessage!=0){
//        printf("*");
//    }


}
