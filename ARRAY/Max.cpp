#include<iostream>
using namespace std;
int main()
{
int a[]= {22,33,44,55,66,};
int n = sizeof(a)/sizeof(a[0]);
//int INT_MIN;
int max= a[0];
//int mx = INT_MIN;
for(int i=0;i<=n;i++)
{
  if(max<a[i])
  max = a[i] ;
 // mx = max(mx,a[i]);
}
cout<<max<<endl;

}
