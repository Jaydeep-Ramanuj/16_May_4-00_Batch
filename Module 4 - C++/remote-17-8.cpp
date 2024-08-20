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

class TVRemote : public Remote
{
public:
    string tvName;
    int NumberOfChannels;
    bool hasNetflixButton;

    TVRemote(int numberOfCells_, int numberOfSwitches_, string circuitType_, string sensorType_, string brandName_, int price_, bool hasMic_, string hiddenLogic_, string owner_, string tvName_, int NumberOfChannels_, bool hasNetflixButton_) : Remote(numberOfCells_, numberOfSwitches_, circuitType_, sensorType_, brandName_, price_, hasMic_, hiddenLogic_, owner_)
    {
        tvName = tvName_;
        NumberOfChannels = numberOfCells_;
        hasNetflixButton = hasNetflixButton_;
    }

    void changeChannel()
    {
        cout << "Channel is now changed" << endl;
    }
    void changeAudio()
    {
        cout << "Audio is now changed" << endl;
    }
};

class ACRemote : public Remote
{

    bool hasTemperatureScreen;
    string ACName;

public:
    ACRemote(int numberOfCells_, int numberOfSwitches_, string circuitType_, string sensorType_, string brandName_, int price_, bool hasMic_, string hiddenLogic_, string owner_, bool hasTemperatureScreen_, string ACName_) : Remote(numberOfCells_, numberOfSwitches_, circuitType_, sensorType_, brandName_, price_, hasMic_, hiddenLogic_, owner_)
    {
        hasTemperatureScreen = hasTemperatureScreen_;
        ACName = ACName_;
    }

    void changeTemperature(int temp)
    {
        cout << "Temperature is now changed to " << temp << endl;
    }
};

class SamsungACRemote : public ACRemote
{

    string samsungACModalNumber;
    bool isAutoModeSupported;

public:
    SamsungACRemote(int numberOfCells_, int numberOfSwitches_, string circuitType_, string sensorType_, string brandName_, int price_, bool hasMic_, string hiddenLogic_, string owner_, bool hasTemperatureScreen_, string ACName_, string samsungACModalNumber_, bool isAutoModeSupported_) : ACRemote(numberOfCells_, numberOfSwitches_, circuitType_, sensorType_, brandName_, price_, hasMic_, hiddenLogic_, owner_, hasTemperatureScreen_, ACName_)
    {

        samsungACModalNumber = samsungACModalNumber_;
        isAutoModeSupported = isAutoModeSupported_;
    }
    void startAutoMode()
    {
        cout << "Ac will now be on automatically at 5:45 PM." << endl;
    }
};

int main()
{

    // Remote sony(2, 5, "X24", "super", "Sony", 300, false, "This is sony remote hidden logic", "Pratigna");
    // Remote lg(2, 7, "GRd", "Ultra", "LG", 450, true, "LG never tells its logic", "Bhumi");

    TVRemote oneplus(2, 5, "X24", "super", "Oneplus", 300, false, "This is oneplus remote hidden logic", "Rachna", "oneplusTV", 32, true);

    TVRemote samsung(2, 5, "X24", "super", "Samsung", 350, true, "This is samsung remote hidden logic", "mayur", "samsungTV", 32, true);

    // cout << "Number of channels: " << oneplus.NumberOfChannels << endl;
    ;
    // cout << "Owner: " << oneplus.owner << endl;
    // cout << "Owner: " << samsung.owner << endl;

    ACRemote samsungAC(2, 5, "X24", "super", "Samsung", 350, true, "This is samsung remote hidden logic", "Himanshu", true, "winter-like");

    // samsungAC.changeTemperature(20);
    // cout << "Owner: " << samsungAC.owner << endl;

    SamsungACRemote samsungACRemote(3, 7, "X24", "super", "Samsung", 350, true, "This is samsung remote hidden logic", "Rachna", true, "winter-like", "AI Pro 1.5", true);

    samsungACRemote.startAutoMode();
    samsungACRemote.changeTemperature(25);
    samsungACRemote.off("AC");

    return 0;
}