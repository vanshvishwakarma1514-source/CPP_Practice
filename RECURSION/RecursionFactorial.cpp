// #include<iostream>
// using namespace std;
// int fact(int a)
// {
//     if(a==0 || a==1)
//     {
//         return 1;
//     }
//     return a*fact(a-1);
// }
// int main()
// {
//     int data = fact(5);
//     cout<<data<<endl;
// }


// #include<iostream>
// using namespace std;
// int power(int x,int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     return x*power(x,n-1);
// }
// int main()
// {
//     int data = power(2,3);
//     cout<<data<<endl;
// }


// #include<iostream>
// using namespace std;
// int sum(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     return n+sum(n+1);
// }
// int main()
// { 
//     cout<<"enter n:"<<endl;
//     int n;
//     cin>>n;
//     int data = sum(n);
//     cout<<data<<endl;
// }


#include <iostream>
using namespace std;

// Function to check palindrome
bool palindrome(int arr[], int start, int end) {
    if (start >= end)
        return true; // base case
    if (arr[start] != arr[end])
        return false; // mismatch found
    return palindrome(arr, start + 1, end - 1); // recursive call
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (palindrome(arr, 0, n - 1))
        cout << "Array is palindrome";
    else
        cout << "Array is not palindrome";

    return 0;
}
