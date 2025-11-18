#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
   int temp = *a; // temp = 3 ,3address ki value hai matlb x ki value
   *a = *b; // *a = 8
   *a = temp  // *a = 3
}                                  // *x,*y indono ko pointer bolte hai.
                                   // &x,&y indono ko pointers ka address bolenge.
int main()
{
    int x = 3;
    int y = 8;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);            //also called as pass by reference,address send kiya hai swap ka parameters mai.
    cout<<x<<" "<<y<<endl;
}