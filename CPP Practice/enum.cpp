#include <iostream>
using namespace std;
int main()
{
    // It is a user defined data-types that consist of integarl constant .... day of weAK

    enum weak
    {
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday

    };
    cout << Sunday << endl;
    weak str = Thursday;// As a data types
    cout << str;
    return 0;
}