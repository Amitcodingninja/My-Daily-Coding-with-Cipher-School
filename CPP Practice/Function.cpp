#include<iostream>
using namespace std;

// struct stu
// {
//     int roll;
//     float marks;
//     char name[20];

// };
union stu2
{
     int roll;
     float marks;
     char name[20];
};





int main()
{
    // 1. User Defined 2. Pre Defined 
    // that runs when it call  # Reusability

    // 1. Pre Defined : strcpy(); , strcat(); , strlen();
   // 2. User Defined : main(){},fun(){},add(){}  1. enum 2. structure 3. union 4. class

// struct stu s;
// union stu2 s2;


// struct stu s;

// cout<<"Enter Student Roll No. ";
// cin>>s.roll;
// cout<<"Enter Student Name ";
// cin>> s.name;
// cout<<"Enter Student Marks ";
// cin>>s.marks;

// cout<<s.roll<<endl<<s.marks<<endl<<s.name;
union stu2 s2;

cout<<"Enter Student Roll No. ";
cin>> s2.roll;
cout<<"Roll Number is "<<s2.roll<<endl;
cout<<"Enter Student Name ";
cin>> s2.name;
cout<<"Name is "<<s2.name<<endl;
cout<<"Enter Student Marks ";
cin>>s2.marks;
cout<<"Marks is "<<s2.marks<<endl;
cout<<s2.roll<<endl<<s2.marks<<endl<<s2.name;

return 0;


}