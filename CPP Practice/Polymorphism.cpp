// #include<iostream>
// using namespace std;
// //Compile Time Polymorphism
// class A
// {
// int num1,num2,s,m;
// public :
// void person()
// {
//     cout<< "Enter Two Numbers : ";
//     cin>>num1>>num2;
//     s=num1+num2;
//     cout<<"Addtion Is "<<s<<endl;
// }
// void person(int a,int b)
// {

//     m=a*b;
//     cout<<"Multiplication Is "<<m<<endl;
// }

// };
// int main()
// {
// // Same object having different Behaviour
// A obj;
// obj.person();
// obj.person(10,10);

//     return 0;
// }

// Overiding Polymorphism  or Run Time Poly Morphism Achiving Techniques

#include <iostream>
using namespace std;
class A
{
public:
    virtual void person()
    {
        cout << "Good Morning Baby " << endl;
    }
};
class B : public A
{
public:
    void person()
    {
        cout << " Good Night Baby " << endl;
    }
};
int main()
{
    //    A obj;
    A *p;

    B obj;
    p = &obj;
    p->person();
    //    obj.person();
    return 0;
}