#include <iostream>


class dog{

public:
 char breed[10];
 int age;
 char color[10];
 char size='m';
  
  dog(char b[10],int a,char c[10],char s){
    breed[10]=b[10];
    age=a;
    color[10]=c[10];
    size=s;
}


 void speak(char name[10]){
    std::cout<<name<<"Bhow Bhow";
 }

 void run(){
    printf("dog is running");
 }
};


int main(){

   // dog dog1("pug",3,"brown","s");
   // dog dog2("bulldog",4,"black","m");

// dog1.speak("Jerry");
// std::cout<<"\nsize: ";
// std::cout<< dog1.size;

// std::cout<<"\n";
// dog2.run();
// std::cout<<"\nsize: ";
// std::cout<< dog2.size;
}