#include <iostream>
using namespace std;
class myBank
{
private:
    int atmPIN, Balance;

public:
    string bName, IFSE;
    int accNumber;

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
{ // 50% Secure
    myBank m;
    m.input();
    m.output();

    cout << "Another Person want to access the account" << endl;
    cout << m.accNumber << endl;
    cout << m.bName << endl;
    cout << m.IFSE << endl;
    // cout <<m.atmPIN << endl;
    // cout <<m.Balance << endl;
    return 0;
}