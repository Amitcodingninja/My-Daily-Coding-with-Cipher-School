#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // ofstream newFile("C:\\Users\\ACER\\OneDrive\\Desktop\\rul.txt");
    string str;
    ifstream newFile("C:\\Users\\ACER\\OneDrive\\Desktop\\rul.txt");
    // if (newFile.is_open()) {
    // cout << "File Created";
    // newFile << "Cpp full Course ...";

    // Read Kaise Krenge
    while (getline(newFile,str))
    {
        cout<<str<<endl;
    }
    

        newFile.close();
    // } else {
    //     cout << "Failed to create the file";
    // }
    return 0;
}
