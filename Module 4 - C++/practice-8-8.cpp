#include <iostream>
#include <stdio.h>

using namespace std;

struct person{
    string name;
    int age;
    bool isLoggedIn;
};


int main(){

// int num1,num2;
// cout<<"Enter your first number: ";
// cin>>num1;
// cout<<"\nEnter your second number: ";
// cin>>num2;

// cout<<"\nSum of num1 and num2 : "<<num1+num2;
// cout<<"\nSub of num1 and num2 : "<<num1-num2;
// cout<<"\nmul of num1 and num2 : "<<num1*num2;
// cout<<"\ndiv of num1 and num2 : "<<(float) num1/num2;

// int var=10;

// int *num;
// num=&var;
// cout<<"Before change";
// cout<<"\n"<<num;
// cout<<"\n"<<*num;
// *num=30;
// cout<<"\nAfter change";
// cout<<"\n"<<num;
// cout<<"\n"<<*num;


// int number;
// printf("This is the way you print something in C");
// scanf("%d",&number);
// printf("Number is : %d",number);


struct person p;
p.name="shyam";
p.age=30;
p.isLoggedIn=true;

cout<<"\nName: "<<p.name;
cout<<"\nAge: "<<p.age;
cout<<"\nisLoggedIn: "<<p.isLoggedIn;

    return 0;
}