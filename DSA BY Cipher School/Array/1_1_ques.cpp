#include <iostream>
#include <climits> //for  INT_MIN;

using namespace std;
int getMax(int num[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
int main()
{
    // maximum value print krna hai
    int size;
    cin >> size;
    int num[100];
    // taking input in array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    getMax(num, size);
    cout << "Max Element is " << getMax(num, size);
}