#include <stdio.h>

void main(){

//11111
//22222
//33333
//44444
//55555

for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("%d",i);
        }
        printf("\n");
    }
//12345
//12345
//12345
//12345
//12345

printf("\n--------------\n");

for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("%d",j);
        }
        printf("\n");
    }


}
