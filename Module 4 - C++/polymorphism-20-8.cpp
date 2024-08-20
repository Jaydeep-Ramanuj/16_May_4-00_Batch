#include <iostream>

using namespace std;

class A
{
    // protected:
    // private:
public:
    string name;

    A(string name_)
    {
        name = name_;
    }

    string getName()
    {
        return name;
    }
};

class B : public A
{
public:
    string userid;
    string name;

    B(string name_, string userid_, string myName) : A(name_)
    {
        userid = userid_;
        name = myName;
    }

    string getUserId()
    {
        return userid;
    }

    string getName()
    {
        return name + " From class B";
    }
    string getName(string str)
    {
        return name + " From class B " + str;
    }
    string getName(string str1, string str2)
    {
        return name + " From class B " + str1 + " " + str2;
    }
};

// class C : public B
// {
//     int age;

//     int getAge()
//     {
//         return age;
//     }

//     string getName()
//     {
//         return name;
//     }
// };

int main()
{

    // C c;
    // c.name;

    B b("Jay", "jay123", "Deep");
    // A a("Jay");
    // cout << a.getName() << endl;
    // cout << b.getName() << endl;

    // cout << "Name: " << b.name << endl;

    // cout << 10 + 20; // here + does summation
    // string t = "10";
    // string temp = "York" + t; // here + does concatenation
    // cout << temp;

    cout << b.getName() << endl;
    cout << b.getName("Something") << endl;
    cout << b.getName("Something", "else") << endl;

    return 0;
}