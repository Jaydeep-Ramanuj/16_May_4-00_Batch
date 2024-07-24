#include <stdio.h>

struct carModel
{
    char car_name[20];
    float car_price;
    int isModified;
};

void main()
{

    struct carModel c1;

    gets(c1.car_name);

    // c1.car_name ="toyota";
    c1.car_price = 8.5;
    c1.isModified = 0;

    printf("\nCar Name: %s", c1.car_name);
    printf("\nCar price: %f", c1.car_price);
    printf("\nIs car Modified?: %d", c1.isModified);
}
