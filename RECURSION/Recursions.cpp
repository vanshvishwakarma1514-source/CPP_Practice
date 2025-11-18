// function calling itself
#include<iostream>
using namespace std;
void greet(int n)
{
    if(n==0)
    {
        return ;
    }else
    cout<<"hello"<<endl;
    greet(n-1); //> functions calls its self
}

int main()
{
    greet(3);
}