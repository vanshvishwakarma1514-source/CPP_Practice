#include<iostream>
#include<algorithm> // imp
#include<climits>// imp
using namespace std;
int main()
{
int a[]= {22,33,44,55,66,};
int n = sizeof(a)/sizeof(a[0]);
int mn = INT_MAX;
int mx = INT_MIN;
for(int i=0;i<=n;i++)
{
  mx = max(mx,a[i]);
  mn = min(mn,a[i]);
}
cout<<mx<<endl;

}
