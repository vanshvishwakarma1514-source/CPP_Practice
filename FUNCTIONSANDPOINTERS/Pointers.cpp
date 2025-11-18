#include<iostream>
using namespace std;
int main()
{
   //pointer is a data type which store address of a variable which contain some value
   // we can access the value of the variable whose address is in the  pointer - using 
   // we can say it ->dereference or *operator  
    int x = 3;
    int* p = &x;
    // cout<<&x<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl; // star operator
    // cout<<&p<<endl;
    *p = 5;  // x  = 5
    cout<<x<<endl;
    cout<<*p<<endl;
}