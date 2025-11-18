#include<iostream>
using namespace std;
class Cricketer
{
    public : // public is important when we create class

    string name;
    int runs;
    float avg;

    Cricketer(string name,int runs,float avg)
    {
        // this-> is used when we take same name in constructor as class of the parameter
      this->name =name;
       this->runs= runs;
       this->avg = avg;
    }
};
void change(Cricketer* c)
{
  c->avg = 8.9; //(*c).avg = 7.5;
}

int main()
{// cricketer is data type like int, float,char which we  create
    Cricketer c1("virat",100,3.4);
    // cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
    // change(&c1);
    // cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
   Cricketer* p1 = &c1; // first we have to store the address of c1 in *p1.
    cout<<(*p1).runs<<endl;
     (*p1).runs = 200;
     cout<<(*p1).runs<<endl; //after updating value of c1 through p1
     (*p1).name = "rohit";
     cout<<(*p1).name<<endl;
     (c1);

    
}