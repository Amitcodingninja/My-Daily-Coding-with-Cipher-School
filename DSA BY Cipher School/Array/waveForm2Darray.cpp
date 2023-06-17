
#include <iostream>
using namespace std;


void printWaveForm(int arr[][4], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        if (i % 2 == 0) // Even rows
        {
            for (int j = 0; j < cols; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else // Odd rows
        {
            for (int j = cols - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main()
{
    int arr[3][4] = {{2, 4, 52, 54},
                     {2, 4, 6, 9},
                     {0, 1, 4, 7}};

    printWaveForm(arr, 3, 4);

    return 0;
}
