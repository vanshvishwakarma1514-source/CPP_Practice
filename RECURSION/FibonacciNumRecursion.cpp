#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==1 || n==2) // base case for fibonaci is 1 and 2.
    return 1;
   return fibo(n-1) + fibo(n-2);
}
int main()
{
    cout<<"enter a value:";
    int n;
    cin>>n;
    cout<<fibo(n);
}
