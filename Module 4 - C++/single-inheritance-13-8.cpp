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

int main()
{

    B b1;
    cout << b1.inheritanceType << endl;
    cout << b1.className;

    b1.getClassName();
    b1.getType();
    return 0;
}