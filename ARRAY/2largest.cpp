#include<iostream>
using namespace std;
int main()
{
int a[]= {22,33,44,55,66,};
int n = sizeof(a)/sizeof(a[0]);
int max= a[0];
int smax = a[0];
for(int i=0;i<=n;i++)
{
  if(max<a[i])
  max = a[i] ;
}
for(int i=0;i<=n;i++)
{
    if(smax<a[i]&& a[i]!= max)
    smax = a[i];
}
cout<<max<<endl;
cout<<smax<<endl;

}
