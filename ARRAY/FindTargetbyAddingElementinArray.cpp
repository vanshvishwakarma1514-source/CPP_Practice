#include<iostream>
using namespace std;
int main()
{
    int n,target;
    cout<<"Enter the size of Array:";
    cin>>n;
    int a[n];
    cout<<"Enter the element of array:";
    for(int i=0; i<=n;i++)
    {
            cin>>a[i];
    }  
    cout<<"Enter the target sum:";
    cin>>target;

    bool found = false;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==target)
            {
                cout<<"Pair found "<<a[i]<<" + "<<a[j]<<"="<<target<<endl;
                found = true;
            } 
        }
    }
    if(!found)
            {
                cout<<"NO pair found that add up  to "<<target<<endl;
            }
    return 0;
}