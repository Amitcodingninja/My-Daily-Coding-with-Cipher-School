#include <iostream>
using namespace std;
int main()
{
    // EException Handling comes at Run Time
    cout << "Execution Starting";
    int a, b, c;
    cout << " Enter Two Number";
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw b;
        c = a / b;
        cout << "Result: " << c;
    }
    catch (int x)
    {
        cout << "can't devide by " << x;
    }

    return 0;
}