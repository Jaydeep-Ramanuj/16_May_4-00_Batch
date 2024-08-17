#include <iostream>

using namespace std;
class Remote
{
private:
    // data member  / attributes / properties
    string hiddenLogic;
    string circuitType;
    string sensorType;

public:
    int numberOfCells;
    int numberOfSwitches;
    string brandName;
    string bodyMaterialType;
    int price;
    bool hasMic;
    string owner;

    // constructor is a special type of function whose name is same as class name. It is used to initialize data members

    // default constructor, its used to initalized data members with default value. It is called automatically by compiler whenever we create an oject of that class

    // If there is no default constructor, then compiler will make (if you haven't created yourself) it and then //_it.
    //_ // Remoteint //_(, bool //_)
    // {
    //     numberOfCells = 2;
    //     numberOfSwitches = 5;
    //     circuitType = "XSEW";
    //     sensorType = "Super";
    //     brandName = "Sony";
    //     price = 300;
    //     hasMic = false;
    // }

    // parameterized constructor, it is used when we want to initialize data member with our own value

public:
    Remote(int numberOfCells_, int numberOfSwitches_, string circuitType_, string sensorType_, string brandName_, int price_, bool hasMic_, string hiddenLogic_, string owner_)
    {
        numberOfCells = numberOfCells_;
        numberOfSwitches = numberOfSwitches_;
        circuitType = circuitType_;
        sensorType = sensorType_;
        brandName = brandName_;
        price = price_;
        hasMic = hasMic_;
        bodyMaterialType = "Plastic";
        hiddenLogic = hiddenLogic_;
        owner = owner_;
    }

    // methods / class functions
    void on(string applianceName)
    {
        cout << applianceName + " is now ON by " + brandName + " Remote" << endl;
    }
    void off(string applianceName)
    {
        cout << applianceName + " is now off by " + brandName + " Remote" << endl;
    }

    void incrementDecrement()
    {
        // your logic
    }

    string getHiddenLogic()
    {
        if (owner == "Pratigna")
        {
            return hiddenLogic;
        }
        else
        {
            cout << "Bhai voh tera remote nahi hai";
        }
    }
};

int main()
{

    Remote sony(2, 5, "X24", "super", "Sony", 300, false, "This is sony remote hidden logic", "Pratigna");
    Remote lg(2, 7, "GRd", "Ultra", "LG", 450, true, "LG never tells its logic", "Bhumi");

    // sony.on("Tv");
    // lg.off("Speaker");

    // sony.brandName = "Sony";
    // lg.brandName = "LG";

    // cout << "Brand: " << sony.brandName << endl;
    // cout << "Brand: " << lg.brandName << endl;

    // cout << "Price: " << sony.price << endl;
    // cout << "Price: " << lg.price << endl;

    // cout << "Sensor Type: " << sony.sensorType << endl;
    // cout << "Sensor Type: " << lg.sensorType << endl;

    // sony.on("Tv");
    // lg.off("Speaker");

    // cout << "Brand: " << sony.brandName << endl;
    // cout << "Brand: " << lg.brandName << endl;

    cout << "Hidden Logic: " << sony.getHiddenLogic() << endl;
    cout << "Hidden Logic: " << lg.getHiddenLogic() << endl;

    return 0;
}