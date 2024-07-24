#include <stdio.h>

struct carModel{
    char car_name[20];
    float car_price;
    int isModified;
};


void main(){
struct carModel car[3];
int num;
//printf("Enter number of values you want to enter: ");
//scanf("%d",num);

for(int i=0;i<3;i++){

    printf("\n-- Car %d Info --",i);

    printf("\nEnter car name:");
    // gets(car[i].car_name);
    scanf(" %s",&car[i].car_name);

    printf("\nEnter car price: ");
    scanf("%f",&car[i].car_price);

    printf("\nIs car modified ?: ");
    scanf("%d",&car[i].isModified);
}

for(int i=0;i<3;i++){
    printf("\n-- Car %d Info --",i);
    printf("\nCar Name: %s",car[i].car_name);
    printf("\nCar Price: %.1f",car[i].car_price);
    printf("\nIs car Modified: %d",car[i].isModified);
    }
}
