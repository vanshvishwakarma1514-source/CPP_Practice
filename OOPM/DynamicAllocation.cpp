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

int main()
{
    Cricketer c1("virat",10000,5.7);
    Cricketer* c2 = new Cricketer("virat",10000,5.7);
    cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
    
    //always use(*C) to print something inside the pointer
    cout<<(*c2).name<<" "<<(*c2).runs<<" "<<(*c2).avg<<endl;


    int x1 = 5;     // this is for comparison only with Cricketer datatype
    int* x2 = new int(5);


}