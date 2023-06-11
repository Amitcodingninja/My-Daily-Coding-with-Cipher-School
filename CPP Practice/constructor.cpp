#include <iostream>
using namespace std;
class A
{
    //     int a, b;

    // public:
    //     // A() // Default Constructor
    //     A(int a, int b) // Parametrised Constructor
    //     {
    //         // a = 10;
    //         // b = 20;
    //         cout << a << endl
    //              << b;
    //     }
   // Copy Constructor
    int x, y;

public:
    A(int a, int b)
    {
        x = a;
        y = b;
        cout << x << endl
             << y << endl;
    }
    A(A &ref) // refrence jaroori hai for copy
    {
        x = ref.x;
        y = ref.y;
        cout << x << endl
             << y;
    }
};
int main()
{
    // The main purpose of constructor to intialise the object
    // A obj(100, 200);
    // return 0;

    A obj(10, 20);
    A obj2 = obj;
    return 0;
}
