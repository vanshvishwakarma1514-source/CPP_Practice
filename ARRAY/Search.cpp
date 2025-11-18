#include<iostream>
using namespace std;
int main()
{
    int a[] = {5,4,3,5,4,1,2,6};
    int n = sizeof(a)/sizeof(a[0]);
    int x;
    cout<<"Enter target:";
    cin>>x;
    bool flag = false;
    for(int i =0; i<=n;i++)
    {
        if(a[i]==x)
        {
           flag = true;
           break;
        }
    } 
    if(flag == true)
    {
        cout<<x<<" is present";
    }else cout<<x<<" is not present";
}