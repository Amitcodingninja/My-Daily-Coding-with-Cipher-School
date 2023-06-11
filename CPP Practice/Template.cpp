// #include <iostream>
// using namespace std;
// template <class A>
// void print(A x, A y)
// {
//     cout << x << ends << y << endl;
// }
// int main()
// {// Function Template
//     print(10, 20);
//     print(10.34, 20.87);
//     print("Amit Thakur", "  Koi Bhi Ladki");

//     return 0;
// }

// ******************************** // Function Template
#include <iostream>
using namespace std;
template <class A>
class print
{
public:
    print(A x, A y)
    {
        cout << x << endl
             << y << endl;
    }
};

int main()
{ // Function Template
    print<double> obj(20.2, 323.4);
    return 0;
}
