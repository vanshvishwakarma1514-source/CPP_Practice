#include<iostream>
using namespace std;
int max(int x ,int y)
// In this we have use more than one return.
{
    if(x>y)
    {
        return x;
    }else  return y;
}

int main()
{
    cout<<"enter x:"<<endl;
    int x;
    cin>>x;
    cout<<"enter y:"<<endl;
    int y;
    cin>>y;
    cout<<"max is "<< max(x,y);
}