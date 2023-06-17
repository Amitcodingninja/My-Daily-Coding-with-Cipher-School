#include <iostream>
using namespace std;
int main()
{
    cout << "Enter your first name: ";

    string firstName;
    cin >> firstName;

    int length = 0;
    for (int i = 0; firstName[i] != '\0'; i++)
    {
        length++;
    }

    cout << "Length of first name: " << length << endl;

    return 0;
}
