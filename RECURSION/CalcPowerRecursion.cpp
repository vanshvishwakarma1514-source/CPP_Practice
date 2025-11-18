#include<iostream>
using namespace std;
int power(int a,int b)
{
    if(b==1)
    {
        return a;
    }
    return a * power(a,b-1);
}
int main()
{
    cout<<"enter the number :";
    int a;
    cin>>a;
    cout<<"enter the power";
    int b;
    cin>>b;
    cout<<power(a,b);
}
