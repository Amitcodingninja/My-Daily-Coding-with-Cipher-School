#include <iostream>
using namespace std;
class A
{
private:
    int a;

protected:
    int b;

public:
    int c;
};
int main()
{
    A obj;
    // obj.a = 20;
    // obj.b = 230;
    obj.c = 50;
    cout << obj.c;
}