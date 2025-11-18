#include<iostream>
using namespace std;
// in this code i have create function inside class
class Horror
{
    public :
    string ghost;
    string hero;
    int death;

    Horror(string b,string h,int d)
    {
        ghost = b;
        hero = h;
        death = d;
    }
    void print(string actress) // function inside class
     {
    cout<<ghost<<" "<<hero<<" "<<death<<" "<<actress<<endl;
    
      }


};

int main()
{
    Horror h1("nun","vansh",8);
   // h1.print("karishma");
   Horror h2("anabela","tatiya vichu",2);
   
    h2.print("karishma");
    h1.print("katrina");
}