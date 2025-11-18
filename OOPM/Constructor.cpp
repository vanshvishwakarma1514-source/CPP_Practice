#include<iostream>
using namespace std;
class Student
{
 public : // access specifier
     string name;
     int rno;
     float cgpa;

     Student()
     {
          // default constructor
     }
     
     Student(string s,int r,float g) // this is a constructor same name as class name
     {
         // parameterized constructor
          name = s;
          rno = r;
          cgpa = g;
     }
};
int main()
{
 Student s1("vansh",360,7.5);
//  s1.name = " vansh ";
//  s1.rno = 360;
//  s1.cgpa = 7.52;
 //cin>>s1.cgpa;

//  Student s2;
//  s2.name = " tanishk";
//  s2.rno = 36;
//  s2.cgpa = 0.52;

 cout<<s1.name<<" "<<s1.rno<<" "<<s1.cgpa<<" "<<endl;
//  cout<<s2.cgpa<<" "<<s2.rno<<" "<<s2.name<<" "<<endl;
}