#include <iostream>
#include <climits>

using namespace std;

int getMin(int num[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cin >> size;
    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    int minElement = getMin(num, size);

    cout << "Min Element is " << minElement << endl;

    return 0;
}
