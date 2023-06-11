#include <iostream>
using namespace std;
class Dad
{
protected:
    int amount;

public:
    void input()
    {
        amount = 10000;
    }
};
class Son : public Dad
{
    int money = 8765334;

public:
    void show()
    {
        cout << money << endl;
        cout << amount << endl;
    }
};
int main()
{
    // 1.Single /Simple Inheritance
    Son s;
    s.input();
    s.show();
    return 0;
}