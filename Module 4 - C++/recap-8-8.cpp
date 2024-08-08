#include <iostream>

// using namespace std;

int sum(int,int);
int sub(int,int);


int main()
{
    std::cout<<"Hello c++";

    // int num;
    // std::cout<<"Enter your number: ";
    // std::cin>>num;
    // std::cout<<"Num: ";
    // std::cout<<num;


// data type
// void
// int
// float
// double 
// char
// bool
// string

bool isUserLoggedIn=true; // 1
bool isPass=false;// 0

 char string[20]="something";
std::string str="something";
std::cout<<"\n";
std::cout<<str;



// Assignment operator

// =

// equality operator

// ==

// Arithmetic operators
// +
// -
// *
// /
// %

// relational operator

// <
// >
// <=
// >=
// !=


// logical operator

// &&
// ||
// !
    
int a=35;
int b=20;
int c=30;
int d=40;

if(a<b){
    std::cout<<"\na is LS b";
}
else if(a>b && a<c){
    std::cout<<"\na is Gt b but a is LS C";
}
else if(a>c && a<d){
    std::cout<<"\na is GT c but a is LS d";
}
else if(a>d){
    std::cout<<"\na is GT d";
}
else{
    std::cout<<"\na is GT b";
}


int age=8;
char status='M';
if (age>8)
{
    if(status=='M'){
    std::cout<<"10 Rs less";
    }else{
    std::cout<<"Full ticket";
    }
}else{
    std::cout<<"Half ticket";
}

int nums[5]={10,20,30,40,50};
std::cout<<nums[3];
nums[3]=300;
std::cout<<nums[3];
int aoa[3][3]={{1,2,3},{4,5,6},{7,8,9}};


std::cout<<aoa[2][0];



// std::cout<< sum(10,20);
// std::cout<< sub(10,20);

int num=0;

for (int i = 0; i < 100; i++)
{
    num+=(i+1);
}

// std::cout<<"\n";
// std::cout<<num;

num=0;
int i=0;
while(i<100){
    num+=(i+1);
    i++;
}

// std::cout<<"\n";
// std::cout<<num;

i=120;
num=0;
do
{
    num+=(i+1);
    i++;
} while (i<100);

std::cout<<"\n";
std::cout<<num;

    return 0;
}


int sum(int num1,int num2) {
    return num1+num2;
}


int sub(int num1,int num2){
    // std::cout<<"hi";
    return num1-num2;
}