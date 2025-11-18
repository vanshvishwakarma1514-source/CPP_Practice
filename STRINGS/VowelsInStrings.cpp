#include<iostream>
using namespace std;
int main()
{
    string s = "cow is a animal with four limbs";
    cout<<s<<endl;
    int count =0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]== 'a'|| s[i]== 'e' || s[i]== 'i'|| s[i]== 'e' || s[i]== 'u')
        {
            count++;
        } 
    }
     cout<<"vowels are "<<count<<endl;
}