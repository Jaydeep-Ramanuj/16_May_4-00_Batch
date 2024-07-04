#include <stdio.h>

void main(){



//*****
//*****
//*****
//*****
//*****



//for(int i=1;i<=5;i++){
//    printf("*****\n");
//}


//for(int i=1;i<=5;i++){
//    printf("*");
//}

// Outer loop, which runs for 5 times,
// which is responsible for printing rows
// (running inside loop for 5 times)
    for(int i=1;i<=5;i++){
    // Inner loop, which runs for 5 times,
   //  which is responsible for printing * for 5 times
        for(int i=1;i<=5;i++){
            printf("*");
        }
        printf("\n");
    }
}
