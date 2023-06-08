#include <iostream>
using namespace std;
int main()
{
    // Derived DataTypes
    // 1. Array 2. String 3. Poinnter 4. Function

    // data-type  arr-var [size] --> int arr[5];

    // 1D Array
    // int i;
    // int arr[5]={10,20,30,40,50};
    // for ( i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    // Index start with 0
    // cout<<arr[0];

    // 2D array

    int a[2][2], i, j;
    cout << "Enter The Array Value ";
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            cin >> a[i][j];
        } 
    }
    cout << " \n Array Elements are : ";
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            cout << a[i][j] << ends;
        }
        cout << endl;
    }

    return 0;
}