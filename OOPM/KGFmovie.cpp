#include<iostream>
using namespace std;
class kgf // kgf is a data type
{
    public :
    string hero;
    string villain;
    string type;
    string actress;

    kgf(string h,string v,string t) // constructor for kgf
    {
        hero = h;
        villain = v;
        type = t;
    }
    kgf(string h,string v,string t,string p)
    {
        hero = h;
        villain = v;
        type = t;
        actress = p;
         
    }
};
void print(kgf a)
{
    cout<<a.hero<<" "<<a.villain<<" "<<a.type<<endl;
    
}
int main()
{
    // c1,c2,c3 are objects
  kgf c1("rocky" , "sanjay" ,"action");  // string mai hamesha inverted coma lagega
     c1.type = "comedy"; // we can also change the value
     c1.hero = "sharukh";
     print(c1);
  
  kgf c2("shahid","sanjay","action");
    print(c2);

  kgf c3("salman","sanju","action");
  c3.type = "horror";
    print(c3);

    kgf c4("modi","rahul","action");
    c4.actress =  "mamta";
    print(c4);

    kgf c5 = c1; // deep copy
    c5.hero = "ajay"; 
    print(c5);

    kgf c6(c2); // copy constructor
    c6.hero = "amir";
    print(c6);
   
}