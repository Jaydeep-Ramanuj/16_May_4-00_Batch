#include <iostream>

using namespace std;

class calculator
{
    int num1;
    int num2;

public:
    calculator(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
    int sum()
    {
        return num1 + num2;
    }
    int sub()
    {
        return num1 - num2;
    }
    int mul()
    {
        return num1 * num2;
    }
    float div()
    {
        return num1 / num2;
    }
    int mod()
    {
        return num1 % num2;
    }
    int getSquare()
    {
        return num1 * num1;
    }
};

int main()
{
    calculator c1(12, 20);
    cout << c1.sum() << endl;
    cout << c1.mul() << endl;
    cout << c1.getSquare() << endl;

    calculator c2(40, 60);
    cout << c2.sum() << endl;
    cout << c2.mul() << endl;
}