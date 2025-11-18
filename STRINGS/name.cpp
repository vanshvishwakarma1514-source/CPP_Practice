#include<iostream>
using namespace std;
int main()
// strings are character array
{
   //string x = "Vansh";
   //cout<<x<<" ";
   string s;
   cout<<"Enter a word:";
  // cin>>s;
  getline(cin,s); // used for string always.
   cout<<s;
}