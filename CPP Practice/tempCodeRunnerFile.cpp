#include <iostream>
using namespace std;
class myBank
{
public:
    string bName, IFSE;
    int accNumber;

private:
    int atmPIN, Balance;
    void input()
    {
        atmPIN = 1234;
        Balance = 9876545674567898765;
        bName = "Amit Bank";
        IFSE = "AMIT THE BEST BANKER";
        accNumber = 67898765467;
    }
    void output()
    {
        cout << "My Bank Detail..." << endl;
        cout << atmPIN << endl;
        cout << Balance << endl;
        cout << bName << endl;
        cout << IFSE << endl;
        cout << accNumber << endl;
        cout << atmPIN << endl;
    }
};
int main()
{
    myBank m;
    m.input();
    m.output();
    return 0;
}