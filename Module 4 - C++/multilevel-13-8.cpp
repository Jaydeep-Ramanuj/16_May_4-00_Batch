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

class C : public B
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

    cout << "Size: " << c1.size << endl;
    cout << "InheritanceType: " << c1.inheritanceType << endl;
    cout << "ClassName: " << c1.className << endl;

    c1.getClassName();
    c1.getType();
    c1.getSize();
    return 0;
}