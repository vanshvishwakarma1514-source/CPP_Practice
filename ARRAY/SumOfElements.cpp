#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int sum =0;
    int n = sizeof(a)/sizeof(a[0]); // ye unique cheez haii..
    for(int i=0;i<=n; i++)
    {
        cout<<"Enter element of Array:";
        cin>>a[i];
        sum += a[i];
    }
    cout<<"sum is "<<sum;
}
