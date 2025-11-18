#include<iostream>
using namespace std;
class Student{
    public :

    int rno;
    string name;
    float marks;

    Student(int r,string n,float m)
    {
        rno = r;
        name = n;
        marks = m;
    }
    
    float marks(Student s)
    {
        return marks;
    } 
  
    private :
 float marks;

};
void display(Student s)
{
      cout<<s.name<<" "<<s.rno<<" "<<s.marks<<endl;
}


int main()
{
    Student s1(12,"vansh",3.4);
    // s1.name = "vansh";
    // s1.rno = 360;
    // s1.marks = 100;
    //cout<<s1.name<<" "<<s1.rno<<" "<<s1.marks<<endl;
    display(s1);

} 