#include <iostream>
using namespace std;
class thief
{
private:
    string name, address;
    // string mob;
    long mob;

public:
    void input()
    {
        name = " Raj ";
        address = " Bihar ";
        mob = 23456543;
    }
    void output()
    {
        cout << name << endl;
        cout << address << endl;
        cout << mob << endl;
    }
};
class police : public thief
{
};
int main()
{
    // 100 % secure
    // data member should be private
    // public member function should be public for encapsulation
    cout << "Ye Thief Wala Hai" << endl;

    thief t;
    t.input();
    t.output();
    cout << "Ye Police  Wala Hai";
    police p;
    p.input();
    p.output();
    return 0;
}