#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            // go to right part
            start = mid + 1;
        }
        else
        {
            // go to leftt part
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
}

int main()
{
    // Sabse Pehle Condition Hoti hai
    // ya to ascending ho ya decending ... Monotonic
    // Sabse pehle middle find krenge
    // phir check krenge badi hai ya choti hai
    // mid=s+e/2;
    // if key <mid ... Left

    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {2, 4, 6, 7, 9};
    int evenIndex = binarySearch(even, 6, 2);
    cout << "Index  is : " << evenIndex << endl;
    return 0;
}