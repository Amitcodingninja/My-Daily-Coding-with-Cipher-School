#include <iostream>
using namespace std;

void update(int n)
{
    n++;
}
void updateRef(int &n)
{
    n++;
}

int main()
{
    // int i = 5; // Normal Variable
    // int &j = i;
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << j << endl;
    // cout << i << endl;
    
    int n = 5;
    cout << " Before " << n << endl;
    update(n);
    cout << " After " << n << endl;
    return 0;
}