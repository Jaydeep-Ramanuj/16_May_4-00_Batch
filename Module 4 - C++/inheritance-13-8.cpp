#include <iostream>

using namespace std;

class animal
{
public:
    int legCount = 4;
    string animalType = "mammals";

    void walk()
    {
        cout << "animal is walking";
    }
};

class dog : public animal
{
public:
    string breed;
    string name;
    int age;

    dog()
    {
        breed = "german shephard";
        name = "NOName";
        age = 1;
    }

    dog(string b, string n, int a)
    {
        breed = b;
        name = n;
        age = a;
    }

    void bark()
    {
        cout << "Bhow Bhow";
    }
};

class myDog : public dog
{
    string favToy;
    string favFood;

public:
    myDog(string t, string f)
    {

        favToy = t;
        favFood = f;
    }
};

int main()
{

    // d.bark();
    // cout << d.name << endl;
    // d.walk();
    // cout << d.legCount;

    // dog d("Pug", "Rocky", 4);

    myDog moti("ball", "Biscuit");

    moti.age = 4;
    moti.name = "moti";
    cout << moti.age << endl;
    cout << moti.name << endl;

    return 0;
}