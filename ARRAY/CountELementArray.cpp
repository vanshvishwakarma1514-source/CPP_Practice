#include<iostream>
using namespace std;
int main()
{
    int a[5] ;
    cout<<"Enter the element:";
    int count = 0;
    int x;
    int n= sizeof(a)/sizeof(a[0]);
    for(int i=0;i<=n;i++)
    {
        cin>>x;
        if(a[i]>x)
        {
            count ++;
        }
    }
    
}