#include<iostream>
using namespace std;
void print(int n)
{
    if(n==0) // base case
    {
        return ;
    }
    print(n-1); //call
  cout<<n<<endl; // work
  //print(n-1); //call
}
int main()
{
    print(3);
}
