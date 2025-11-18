#include<iostream>
using namespace std;
class Cricketer
{
    public : // public is important when we create class

    string name;
    int runs;
    Cricketer(string name,int runs)
    {
        // this-> is used when we take same name in constructor as class of the parameter
      this->name =name;
       this->runs= runs;
    }
    void print()
    {
        cout<<name<<endl<<runs<<endl;
    }
};
int main()
{
    Cricketer c1("virat",100);
    // c1.name = "Virat kohli";
    // c1.runs = 100;
    c1.print();
}