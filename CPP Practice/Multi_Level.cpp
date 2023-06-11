#include <iostream>
using namespace std;
class A
{
protected:
    int a, b;

public:
    void input()
    {
        cout << "Enter two Numbers : ";
        cin >> a >> b;
    }
};
class B : public A
{
    int c;

public:
    void add()
    {
        c = a + b;
        cout << "Addition " << c << endl;
    }
    void sub()
    {
        c = a - b;
        cout << "Substraction " << c << endl;
    }
};
class C : public B
{
    int c;

public:
    void multi()
    {
        c = a * b;
        cout << "Multiplication Is " << c;
    }
    void div()
    {
        c = a / b;
        cout << "Division Is " << c;
    }
};
int main()
{
    // Multi - Level inheritance
    C obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.multi();
    obj.div();

    return 0;
}