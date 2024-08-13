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

class D : public C
{
public:
    int length = 500;

    void getLength()
    {
        cout << "\n length : " << length;
    }
};

int main()
{

    D d1;
    cout << "className: " << d1.className << endl;
    cout << "type: " << d1.inheritanceType << endl;
    cout << "size: " << d1.size << endl;
    cout << "length: " << d1.length << endl;

    d1.getClassName();
    d1.getType();
    d1.getSize();
    d1.getLength();
    return 0;
}