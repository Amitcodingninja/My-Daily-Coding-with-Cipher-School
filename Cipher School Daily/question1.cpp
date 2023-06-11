// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << i + 1 << " " << j + 1 << endl;
//         }
//     }
// }
// int i = 0;
    // while (i < 3)
    // {
    //     int j = 0;
    //     while (j < 3)
    //     {
    //         cout << i + 1 << " " << j + 1 << endl;
    //         j++;
    //     }
    //     i++;


#include <iostream>
using namespace std;

void printPattern(int n) {
int totalElements = n * n;
int currentElement = 1;

while (currentElement <= totalElements) {
int row = (currentElement - 1) / n + 1;
int col = (currentElement - 1) % n + 1;

cout << row << " " << col << endl;

currentElement++;
}
}

int main() {
int n;
cin >> n;

printPattern(n);

return 0;
}