#include <iostream>

using namespace std;

class A
{

public:
    string className = "A";
    void getClassName()
    {
        cout << "\n Class : " << className;
    }
};
class B : public A
{

public:
    string inheritanceType = "single-inheritance";

    void getClassName()
    {
        cout << "\n Class : " << className;
    }

    void getType()
    {
        cout << "\n Type : " << inheritanceType;
    }
};

class C : public A
{
public:
    int size = 100;
    string className = "C";
    void getSize()
    {
        cout << "\n Size : " << size;
    }
};

int main()
{

    C c1;
    B b1;

    cout << "-- B --" << endl;
    cout << "inheritanceType: " << b1.inheritanceType << endl;
    cout << "ClassName: " << b1.className << endl;
    cout << "-- C --" << endl;
    cout << "Size: " << c1.size << endl;
    cout << "ClassName: " << c1.className << endl;
    cout << "-- B --" << endl;
    b1.getClassName();
    b1.getType();
    cout << "-- C --" << endl;
    c1.getClassName();
    c1.getSize();
    return 0;
}