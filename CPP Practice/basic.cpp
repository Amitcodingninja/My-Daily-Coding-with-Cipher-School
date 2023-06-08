#include <iostream>
using namespace std;
int c = 30;        // global Variable
static int d = 40; // static global
int main()
{
    // 3 types of Datatypes
    // 1.Primitive 2.Derived 3. User Defined Datatypes
    //  1.Int
    //  2.char
    //  3.Float
    //  4.Double
    //  5.Bool
    //  6.Void
    // 2.Derived
    //  1.Array
    //  2.Function
    //  3.Pointer
    //  4.Refrence
    // 3.User_Defined_Datatypes
    //  1.Structure
    //  2.Union
    //  3.Class
    //  4.Enumeration
    // TYPES OF VARIABLE
    // int a = 10;        // local Variable
    // static int b = 20; // static local Variable
    // cout << a << " " << b << " " << c << " " << d << endl;
    // Keyword ko Variable use nahi kar sakte hai see the color --> it matter's

    // Constant Keyword use const Keyword and literals bhi bol sakte hai Pointer use krke jabardasti change kr sakte hai

    // const int e=10;
    // int e=50;
    // cout<<e;
    //    Typer Of Operator
    // 1.Arithmetic Operator (+,-,*,/,%)
    // 2. Relational Operator (>,<,>=,<=,==,!=)
    // 3.Logical Operator (&&,||,!)
    // 4. Assignment Operator(=,+=,-=,*=,/=)
    // 5.Ternary Operator(?:)->if else
    // Bitwise Operator(&,|,^,~,<<,>>)

    // Conditional Statement
    // Atm Balance
    // int atm;
    // cout << "Enter Atm Pin";
    // cin >> atm;
    // if (atm == 1234)
    // {
    //     cout << "You Can Access Your Balance";
    // }
    // else
    // {
    //     cout << "Sahi Pin Dal";
    // }

    // int a,b,max;
    // cout<<"Enter The Value : ";
    // cin>>a>>b;
    // Using Ternary Operator
    // max=(a>b)?a:b;
    // cout<<max;

    // int a, b, add, sub, multi, div, ch;
    // cout << "Enter The Value Of a and b = ";

    // cin >> a >> b;
    // cout << "Enter Choice ";
    // cin >> ch;
    // if (ch == 1)
    // {
    //     add = a + b;
    //     cout << add;
    // }

    // else if (ch == 2)
    // {
    //     sub = a - b;
    //     cout << sub;
    // }
    // else if (ch == 3)
    // {
    //     multi = a * b;
    //     cout << multi;
    // }
    // else if (ch == 4)
    // {
    //     div = a / b;
    //     cout << div;
    // }
    /* `return` is a keyword in C++ that is used to exit a function and return a value to the calling
    function. In the given code, `return 0` is used to exit the `main` function and return the
    value 0 to the operating system, indicating that the program has executed successfully. */
    // return 0;

// NESTED IF ELSE
//3 NUMBER MAI KON SABSE BDA HAI

// int a=10,b=20,c=30;
// if (a>b)
// {
//     if (a>c)
//     {
//         cout<<"a="<<a;
//     }
//     else
//     {
//         cout<<"c= "<<c;

//     }
    
// }
// else
// {
//     if (b>c)
//     {
//         cout<<"b= "<<b;
//     }
//     else
//     {
//         cout<<"c= "<<c;
//     }
    
// }

// int ch;
// cout<<"Enter Your Choice : ";
// cin>>ch;
// switch (ch)
// {
// case 0: cout<<"Sunday";
//    break;
// case 1: cout<<"Monday";
//    break;
// case 2: cout<<"Tuesday";
//    break;
// case 3: cout<<"Wednesday";
//    break;         
// case 4: cout<<"Thursday";
//    break;    
// case 5: cout<<"Friday";
//    break;
// case 6: cout<<"Saturday";
//    break;
      
// default:cout<<"Inavlid Choice ";
   
// }
// return 0;

// cout<<((10>5)&& (20<5))<<endl;//False
// cout<<((10>5)|| (20<5))<<endl;//True
// cout<<((10!=5)&& (20<5))<<endl;//False
// cout<<!(10>5);//False


}