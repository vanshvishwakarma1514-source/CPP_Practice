#include<iostream>
using namespace std;
int main()
{
    int a[5];
    long long product = 1;
    int n = sizeof(a)/sizeof(int); // ye unique cheez haii..
    for(int i=0;i<=n; i++)
    {
        cout<<"Enter element of Array:";
        cin>>a[i];
        product *= a[i];
    }
    cout<<"product is "<<product;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long product = 1; // Use long long for large results
    for (int i = 0; i < n; i++) {
        product *= arr[i];
    }

    cout << "Product of all elements = " << product << endl;
    return 0;
}

