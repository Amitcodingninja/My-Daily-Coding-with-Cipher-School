#include <iostream>
using namespace std;
int FirstOccurrence(const int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    int result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            result = mid;
            right = mid - 1; // Continue searching towards the left for the first occurrence
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return result;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 5, 5, 5, 6};
    int target = 5;
    int size = sizeof(arr) / sizeof(arr[0]);

    int firstIndex = FirstOccurrence(arr, size, target);
    if (firstIndex != -1)
    {
        cout << "The first occurrence of " << target << " is at index " << firstIndex << endl;
    }
    else
    {
        cout << "The target element " << target << " was not found in the array." << endl;
    }

    return 0;
}
