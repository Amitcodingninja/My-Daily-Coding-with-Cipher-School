#include <iostream>
using namespace std;

class delhi
{
public:
    void eat()
    {
        cout << "Delhi Wala Gali Dega  " << endl;
    }
};

class Haryan : public delhi
{
public:
    void voice()
    {
        cout << "Haryana Wala Ladai Ghagda Krega " << endl;
    }
};
class Vishal : public delhi
{
public:
    void voice()
    {
        cout << "Behen chod ..Behen Chod Behen chod ..Behen ChodBehen chod ..Behen Chod Behen chod ..Behen Chod " << endl;
    }
};

int main()
{
    // single base class ko multiple derived class inherit krta hai
    Haryan c;
    Vishal d;
    c.eat();
    c.voice();
    d.eat();
    d.voice();
    return 0;
}