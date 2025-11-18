#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter a Array size :";
   cin>>n;
   int arr[n];
   for(int i=0;i<=n;i++)
   {
    cout<<"enter elements of Array:";
    cin>>arr[i];
   }
   for(int i=0;i<=n;i++)
   {
    cout<<arr[i]<<" ";
   }
}