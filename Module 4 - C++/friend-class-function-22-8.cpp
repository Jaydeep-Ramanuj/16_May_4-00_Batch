#include <iostream>

using namespace std;

class A
{
    // friend class B;

    string name;

public:
    int age;

    A(string name_, int age_)
    {
        name = name_;
        age = age_;
    }

    string getName()
    {
        return name;
    }

    string getCity(B &b)
    {
        cout << "----" << endl;
        cout << "b City: " << b.city;
    }
};

class B
{

    friend class A;

public:
    string city;
    int age;

    B(string city_, int age_)
    {
        city = city_;
        age = age_;
    }

    string getCity()
    {
        return city;
    }

    // string getName(A &a)
    // {
    //     cout << "---" << endl;
    //     return a.name;
    // }
};

int main()
{
    A a("Jay", 65);
    B b("Baroda", 65);

    cout << "a name: " << a.getName() << endl;
    cout << "b city: " << b.getCity() << endl;

    // cout << "A name: " << b.getName(a) << endl;
    cout << "B City: " << a.getCity(b) << endl;

    return 0;
}