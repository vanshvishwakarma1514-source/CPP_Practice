#include<iostream>
using namespace std;
int main()
{
   int a[] = { 12,33,44,55,66,};
   int n = sizeof(a)/sizeof(a[0]);
   for(int i=0;i<n;i++)
   {
    cout<<a[i]<<" ";
   }
   cout<<endl;
   int b[n];
   for(int i=0;i<n;i++)
   {
    b[i] = a[n-1-i]; // ye logic hai..
   }
   for(int i=0;i<n;i++)
   {
    cout<<b[i]<<" ";
   }
   cout<<endl;
}