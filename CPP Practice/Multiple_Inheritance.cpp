#include <iostream>
using namespace std;

int a, b, c;
class A
{
public:
    void input();
    void add();
};
void A ::input()
{
    cout << "Enter Two Numbers : ";
    cin >> a >> b;
}
void A ::add()
{
    c = a + b;
    cout << "Addition " << c << endl;
}

class B
{
public:
    void sub();
};
void B::sub()
{
    c = a - b;
    cout << "Substraction " << c << endl;
}
class C : public A, public B
{
public:
    void multi();
    void div();
};
void C::multi()
{
    c = a * b;
    cout << " Multiplication Is " << c << endl;
}
/* `void C::div()` is a member function of class C that performs division operation on the two numbers
entered by the user and stores the result in the variable `c`. The result is then printed on the
console using the `cout` statement. */
void C::div()// class ke bahar bhi class ke function ko use kr sakte hai

{
    c = a / b;
    cout << "Division Is " << c;
}

int main()
{
    // 1 se base class 1  derived class bnaega
    C obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.multi();
    obj.div();

    return 0;
}