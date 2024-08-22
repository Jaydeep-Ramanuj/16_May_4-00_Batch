#include <iostream>

using namespace std;
class Person
{

    // Static member / static variable / class variable, it is used when we want to share some data member across multiple object

    static int id;
    static string apiPoint;
    string name;
    int age;
    string city;

public:
    Person(string name_, int age_, string city_)
    {
        name = name_;
        age = age_;
        city = city_;
        incrementId();
    }
    int getId()
    {
        return id;
    }

private:
    string getName()
    {
        return name;
    }

    // static method / class method, it is used when we want to perform some operation on static members. Remember that static functions can only access static variables

    static void incrementId()
    {
        id++;
    }
};

// Initializing static variable

class Car
{
    int id;
    int getId()
    {
        return id;
    }
};

int Person::id = 0;
string Person::apiPoint = "https://randomuser.me/api/3";

int main()
{

    Person jay("Jay", 65, "Rajkot");
    cout << "Jay Id: " << jay.getId() << endl;

    Person vijay("Vijay", 25, "Baroda");
    cout << "Vijay Id: " << vijay.getId() << endl;

    Person sanjay("Sanjay", 52, "Surat");
    cout << "Sanjay Id: " << sanjay.getId() << endl;

    // sanjay.getName();
    return 0;
}