#include <stdio.h>

void main(){

int m1[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9},
};
int m2[3][3]={
    {9,8,7},
    {6,15,4},
    {3,2,1},
};

int r[3][3];


for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
            r[i][j]=0;
//            r[i][j] = m1[i][j]+m2[i][j]; // Addition
            r[i][j] = m1[i][j]-m2[i][j]; // Subtraction
    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",r[i][j]);
    }
    printf("\n");
}

}
