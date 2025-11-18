#include<iostream>
#include<vector>
// vector can increase the size of array dynamically
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size:";
    cin>>n;
   // int arr[n];
   // vector se array banana ho agar
   vector<int> arr(n,5); //round bracket lagega size ka liye
                            //(n,0) isme n size hai vector ki and 0 element hai
                            //koi value nai hogi toh array mai zero ayega
   
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     cout<<arr.size()<<endl;
     //cout<<arr.capacity()<<endl;
     // agar peeche element add karna ho
     arr.push_back(10); // is command se 1 size ka array banega which contain 10
     arr.pop_back();
     cout<<arr.size()<<endl;
     cout<<arr.capacity()<<endl;
}
