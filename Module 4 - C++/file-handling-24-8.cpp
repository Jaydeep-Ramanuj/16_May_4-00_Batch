#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string data;

    // ifstream inp_file("data.txt");
    // getline(inp_file, data);
    // cout << data << endl;
    // inp_file.close();

    // ofstream out_file("data.txt");
    // out_file << "This is newly entered text";
    // out_file.close();

    ofstream app_file("data.txt", ios::app);
    app_file << "\n This is latest text";
    app_file.close();

    return 0;
}