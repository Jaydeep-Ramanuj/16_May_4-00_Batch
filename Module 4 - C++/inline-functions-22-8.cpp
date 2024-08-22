#include <iostream>

using namespace std;

class Person
{
    string name;
    int age;
    string city;

public:
    Person(string name_, int age_, string city_)
    {
        name = name_;
        age = age_;
        city = city_;
    }

    string getName()
    {
        return name;
    }

    inline int doJaap()
    {
        int i;
        for (size_t i = 0; i < 108; i++)
        {
            cout << "Jay Shree Ram" << endl;
        }
        return i;
    }

    inline int sum(int num1, int num2)
    {
        return num1 + num2;
    }
};

int main()
{
    Person jay("Jay", 65, "Rajkot");
    Person vijay("Vijay", 25, "Baroda");

    jay.doJaap();
    jay.doJaap();
    // jay.doJaap();
    // jay.doJaap();
    // jay.doJaap();
    // jay.doJaap();
    return 0;
}