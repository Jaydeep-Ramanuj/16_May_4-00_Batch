#include <stdio.h>

void main(){
printf("Welcome!");
printf("\nChoose what you want");


// Hyundai, Toyota, Mahindara, Maruti
char carDetails[4][3][2][20]={
    {
        {"Creta","7.5"},{"Verna","9.5"},{"Venue","10.5"}
    },
    {
        {"Fortuner","30"},{"Innova","16"},{"Crysta","20.1"}
    },
    {
        {"Thar","17"},{"Scorpio","20"},{"Bolero","10"},
    },
    {
        {"Swift","8"},{"Brezza","9"},{"Fronx","12"}
    },
};


printf("\n1. Hyundai");
printf("\n2. Toyota");
printf("\n3. Mahindra");
printf("\n4. Maruti");


for(int i=0;i<4;i++){
    printf("\n%d: %s",i,carDetails[0][0][i]);
}

}
