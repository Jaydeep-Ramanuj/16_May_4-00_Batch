#include <iostream>

using namespace std;

class Remote
{

public:
    // Data member / Attributes / properties

    int height;
    int width;
    string color;
    string companyName;
    int price;

    // constructor, same name as class name, it is used to initialize data member

    // Default constructor, it is used when we want to initialize data member with default value

    // Remote()
    // {
    //     height = 10;
    //     width = 2;
    //     color = "white";
    //     companyName = "Sony";
    //     price = 400;
    // }

    // Parameterized constructor, ame name as class name, it is used when we want to initialize data member with custom data

    Remote(int height_, int width_, string color_, string companyName_, int price_)
    {
        height = height_;
        width = width_;
        color = color_;
        companyName = companyName_;
        price = price_;
    }

    // Destructor, it is used to delete / remove memory occupied by object, it is also used to release resources
    ~Remote()
    {
        // your code here which you want release
        // ex. fclose()
    }

    // Methods / class functions

    int on()
    {
        cout << companyName << "Tv is On Now";
    }
    int off()
    {
        cout << companyName << "Tv is Off Now";
    }
    int channelChange()
    {
        cout << "Channel Changed";
    }
    int volumeChange()
    {
        cout << "Volume changed";
    }

    string getCompanyName()
    {
        return companyName;
    }
    string getColor()
    {
        return color;
    }
    int getHeight()
    {
        return height;
    }
    int getWidth()
    {
        return width;
    }
    int getPrice()
    {
        return price;
    }

    int discountedPrice()
    {
        return price - 50;
    }
};

int main()
{

    Remote r1(10, 2, "Blue", "LG", 330);
    Remote r2(12, 4, "Brown", "Sony", 450);

    cout << "Remote Name: " << r1.companyName << endl;
    cout << "Remote Name: " << r2.companyName << endl;

    cout << "R1 price: " << r1.price << endl;
    cout << "R2 price: " << r2.price << endl;

    cout << "Discounted price: " << r1.discountedPrice() << endl;
    cout << "Discounted price: " << r2.discountedPrice() << endl;

    return 0;
}
