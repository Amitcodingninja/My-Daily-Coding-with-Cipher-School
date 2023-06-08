#include <iostream>
using namespace std;
int main()
{
   // hold address of another variable
   // &-> Address of Operator
   //* -> value at address of Operator  
  /* This code is demonstrating the use of pointers in C++. */
  int *p;
  
  int a=10;
  p=&a;
  cout<<&a<<endl;
  cout<<p<<endl;
  cout<<a<<endl;
  cout<<"P= "<<*p<<endl;

}