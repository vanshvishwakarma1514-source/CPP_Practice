#include<iostream>
using namespace std;
int main()
{
    // 5 integer -> 6,4,7,8,9,3
   int a[5];
   cout<<"Enter elements of array:"<<endl;
   for(int i=0;i<=4;i++){
   cin>>a[i];
   }
   for(int i=0;i<=4;i++)
   {
    cout<<a[i]<<" ";
   }
   a[0]= 100;   // updating the value
   cout<<endl;
   for(int i=0;i<=4;i++)
   {
    cout<<a[i]<<" ";
   }
   
}