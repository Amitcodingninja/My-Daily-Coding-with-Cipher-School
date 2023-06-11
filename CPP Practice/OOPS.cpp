#include <iostream>
using namespace std;
// class Print
// {
//     public:
//     void show()
//     {
//   cout<<"Hello Amit Thakur ";
//     }
// };

class Person
{
private:
    int run;
    string msg;

public:
    void play()
    {
        run = 50;
        cout << "Today i scored " << run << " run" << endl;
    }
    void walk()
    {
        msg = "today i walked 3 kilometers";
        cout << msg;
    }
};

int main()
{
    // Class Ans Object
    // class is a user - defined datatype
    // it has its own data member and member function which are used by creating an instance of class
    // Object:-  object is an instance of class that have state and behaviour
    //  Syntax :- class-name object -name;

    // WAP to print message using class and object

    // Print obj;
    // obj.show();
    Person obj;
    obj.play();
    obj.walk();
}