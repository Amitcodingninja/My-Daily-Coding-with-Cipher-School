#include <iostream>
#include <climits>
using namespace std;
int rowSum(int arr[][4], int row, int col)
{
    int maximum = INT_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maximum)
        {
            maximum = sum;
            rowIndex = row;
        }
    }
    cout << "Maximum Sum Is : " << maximum;
    return row;
}

int main()

{
    int arr[3][4] = {2, 4, 52, 54, 2, 4, 6, 9, 0, 1, 4, 7};
    for (int j = 0; j < 4; j++)
    {
        cout << arr[0][j] << " ";
    }
    cout << endl;

    cout << (arr, 3, 4) << endl;
    return 0;
}