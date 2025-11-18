// #include<iostream>
// using namespace std;
// int main()
// {
//     // using three variable..
//     int x =2;
//     int y= 3;
//     cout<<x<<" "<<y<<endl;
//     int temp =x;
//     x=y;
//     y = temp;
//     cout<<x<<" "<<y<<endl;

// }

#include<iostream>
using namespace std;
int main()
{
    int x =3;
    int y =4;
    cout<<x<<" "<<y<<endl;
    x = x+y;
    y =x-y;
    x = x-y;
    cout<<x<<" "<<y<<endl;


}