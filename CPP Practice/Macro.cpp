#include<iostream>
#define num 10
#define num1(a,b) ( (a,b)?a:b)
using namespace std;
int main()
{
//     int i,r;

// for (i = 1; i <=10; i++)
// {
//     r=num*i;
//   cout <<num<<"*"<<i<<"="<<r<<endl; 
// }

cout<<num1(23,423)<<endl;
cout<<num1(25,623)<<endl;
cout<<num1(245,23)<<endl;
cout<<num1(23,3)<<endl;
cout<<num1(2,3)<<endl;
// 1 bar mai 5 result dekh sakte hai


return 0;
}