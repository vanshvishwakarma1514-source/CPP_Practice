#include<iostream>
#include<vector>// ye header file use hogi jab bhi vector lenge
#include<algorithm> // ye header file use hogi sort mai

using namespace std;
int main()
{
    // sort(v.begin(),v.end()) =>ye use karnege vector mai
    cout<<"Enter the element:";
    int n;
    cin>>n;
    vector<int> v(5);
    for(int i =0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}