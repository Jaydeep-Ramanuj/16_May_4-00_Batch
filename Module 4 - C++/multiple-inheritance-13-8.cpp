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

class B
{

public:
    string inheritanceType = "single-inheritance";

    void getType()
    {
        cout << "\n Type : " << inheritanceType;
    }
};

class C : public A, public B
{
public:
    int size = 100;
    // string className = "C";
    void getSize()
    {
        cout << "\n Size : " << size;
    }
};

int main()
{

    C c1;
    cout << "className: " << c1.className << endl;
    cout << "type: " << c1.inheritanceType << endl;
    cout << "size: " << c1.size << endl;

    c1.getClassName();
    c1.getType();
    c1.getSize();
    return 0;
}