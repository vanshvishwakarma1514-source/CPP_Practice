#include<iostream>
using namespace std;
int main()
{
    int a[] = {11,22,33,44,55};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
    cout<<endl;
        int i=0,j=n-1;
        while(i<j)
        {
            int temp =a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
         for(int i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
    cout<<endl;
    }
