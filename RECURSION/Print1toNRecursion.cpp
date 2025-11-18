// #include<iostream>
// using namespace std;
// void print(int n)
// {
//     if(n==0)
//     {
//         return ;
//     }
//    print(n-1);
//   cout<<n<<endl;
// }
// int main()
// {
//     print(3);
// }

#include<iostream>
using namespace std;
void print(int x,int n)
{
    if(x>n)
    {
        return ;
    }
  cout<<x<<endl;
  print(x+1,n); // recursion start from here
}
int main()
{
    cout<<"Enter a value:";
    int n;
    cin>>n;
    print(1,n);
}
