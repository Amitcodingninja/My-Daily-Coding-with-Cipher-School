#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
        else
            return false;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 5, 6};
    cout << "What Do ypu want to Search" << endl;
    int key;
    cin >> key;
    bool found = linearSearch(arr, 10, key);
    if (found)
    {
        cout << "Key found" << endl;
    }
    else

        cout << "Key not found n " << endl;
}
