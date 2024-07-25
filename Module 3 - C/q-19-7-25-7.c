#include <stdio.h>

void main(){
int value=100;
int num=0;
int roundTrip=36;

int top, left, bottom, right;

for(int i=0;i<10;i++){
    for(int i=0;i<10;i++){
            if(top==10){
                printf("%d",num);
            }
            else{
                printf("%d",num);
                top-=2;
            }
        num++;
    }
    printf("\n");
}


}
