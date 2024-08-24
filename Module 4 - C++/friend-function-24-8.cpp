#include <iostream>

using namespace std;

class User
{
    string name = "Sanjay";
    bool hasLoggedIn = true;
    int age = 12;

    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }

    friend bool isEligibleForDrivingLicence();
};

bool isEligibleForDrivingLicence()
{
    User u;
    if (u.age > 18)
    {
        cout << "Eligible";
    }
    else
    {
        cout << "Not Eligible";
    }
}

int main()
{
    // User u;
    cout << isEligibleForDrivingLicence();
    return 0;
}