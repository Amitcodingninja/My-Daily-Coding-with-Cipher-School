#include <iostream>
using namespace std;
int count = 0;
class A
{
public:
    A()
    {
        cout << "Object " << ++count << " Created" << endl;
    }
    ~A()
    {
        cout << "Object " << count-- << " Deleted" << endl;
    }
};
int main()
{
    A obj, obj2, obj3;
    return 0;
}