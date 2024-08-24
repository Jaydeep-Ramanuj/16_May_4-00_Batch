#include <iostream>

using namespace std;

class A
{
public:
    int a_var = 10;

    virtual int getVar()
    {
        return a_var;
    };
};
class B : public A
{

public:
    int b_var = 20;

    int getVar() override
    {
        return b_var;
    }
};

int main()
{

    A a;
    B b;

    cout << a.getVar() << endl;
    cout << b.getVar() << endl;

    return 0;
}