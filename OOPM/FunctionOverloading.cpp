#include<iostream>
using namespace std;
class Loading
{
    // same name ka multiple function with  different num of type and parameter is called function overloading
    public :
    int sum(int a,int b) // sum is  a function
    {
        return a+b;
    }

    int sum(int a ,int b,int c) // sum is a function with three parameters
    {
        cout<<a+b+c<<endl;
    }
    void print(string a,string b)
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    Loading l; // loading datatype l is a object
    l.sum(5,5);
    l.sum(5,3,4);
    l.print("vansh","vishwakarma");
}