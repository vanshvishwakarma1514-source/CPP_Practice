#include<iostream>
using namespace std;
class Student  // student is a new data type,always use first letter capital
{
 public : // access specifier
     string name;
     int rno;
     float cgpa;
};
class car // car name ka data type hai ye
{
         string name;
         int price ;
         int seats ;
         
}; // yaha pe semicolon lagega
int main()
{
 Student s1;
 s1.name = " vansh "; // intialisation of student s1
 s1.rno = 360; // . use karna hota hai initialize karne ko
 s1.cgpa = 7.52;
 //cin>>s1.cgpa;


 // note: s1 and s2 are object of the class

 Student s2;
 s2.name = " tanishk";
 s2.rno = 36;
 s2.cgpa = 0.52;

 cout<<s1.cgpa<<" "<<s1.rno<<" "<<s1.name<<" "<<endl;
 cout<<s2.cgpa<<" "<<s2.rno<<" "<<s2.name<<" "<<endl;
}