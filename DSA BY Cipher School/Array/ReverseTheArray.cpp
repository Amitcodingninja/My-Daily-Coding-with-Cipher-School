#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    cout << endl;
}
int main()
{
    int evenArr[6] = {2, 5, 6, 7, 3, 9};
    int oddArr[5] = {2, 6, 7, 3, 9};
    reverse(evenArr, 6);
    reverse(oddArr, 5);
    printArray(evenArr, 6);
    printArray(oddArr, 6);

    return 0;
}