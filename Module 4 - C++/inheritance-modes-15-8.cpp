#include <iostream>

using namespace std;

class A
{
private:
    int prop_1 = 20;
    int prop_2 = 60;

    void private_func()
    {
        cout << "Private function from Class A" << endl;
    }

public:
    void public_func()
    {
        cout << "Public function from Class A" << endl;
    }

    void get_Prop_1_val()
    {
        private_func();
        cout << "Prop 1: " << prop_1;
    }

    int get_prop_1()
    {
        // if(check_conditions){

        // }
        return prop_1;
    }
    int get_prop_2()
    {
        return prop_2;
    }
};

class B : public A
// class B : private A
// class B : protected A
{
    int prop_3 = 50;
    string link = "https://www.instagram.com/";

    string generateInstaLink(string name)
    {
        return link + name;
    }

    bool checkInstaId(string id)
    {
        // steps to verify user if it legit

        return true;
    }

public:
    int get_prop_3()
    {
        return prop_3;
    }

    string getUserId(string name)
    {
        // perform security checks here
        if (checkInstaId("userid"))
        {
            return generateInstaLink(name);
        }
        else
        {
            cout << "You are not authorized to perform this action";
        }
    }
};

int main()
{

    A a1;
    // a1.public_func();
    // a1.get_Prop_1_val();
    // a1.get_prop_1();

    B b1;
    b1.get_prop_3();
    b1.get_prop_2();
    b1.get_prop_1();
    // b1.private_func();

    cout << b1.getUserId("virat.kohli") << endl;
    cout << b1.getUserId("mahi7781");
}