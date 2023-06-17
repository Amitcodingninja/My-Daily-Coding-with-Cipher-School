#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++)
        {
            // Compare adjacent elements and swap if necessary
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
