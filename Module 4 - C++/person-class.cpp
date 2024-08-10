#include <iostream>

using namespace std;

class Person
{

public:
    string name;
    int age;
    string city;
    int percentage;
    string car;

    Person(string n, int a, string c, int p, string ca)
    {
        name = n;
        age = a;
        city = c;
        percentage = p;
        car = ca;
    }

    void greet()
    {
        cout << "Hello " << name;
    }

    void getDetail()
    {
        cout << age << " years old " << name << " is living in " << city;
    }

    void getCar()
    {
        cout << name << " has " << car << " car";
    }
};

int main()
{

    Person p1("Ajay", 23, "Rajkot", 86, "Alto");
    Person p2("Sanket", 45, "Surat", 78, "Veganar");
    Person p3("Deep", 21, "Baroda", 72, "Thar");

    // cout << "Name: " << p1.name << endl;
    // cout << "Name: " << p2.name << endl;
    // cout << "Name: " << p3.name << endl;

    // p1.greet();
    // p2.greet();
    // p3.greet();

    // p1.getDetail();
    // cout << endl;
    // p2.getDetail();
    // cout << endl;
    // p3.getDetail();

    p1.getCar();
    cout << endl;
    p2.getCar();
    cout << endl;
    p3.getCar();

    // cout << "p1 Detail: " << p1.getDetail() << endl;
    // cout << "p2 Details: " << p2.getDetail() << endl;
    // cout << "p3 Details: " << p3.getDetail() << endl;
}