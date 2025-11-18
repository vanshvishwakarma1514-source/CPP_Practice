#include<iostream>
using namespace std;
class Car
{
    public :
         string name;
         int price ;
         int seats ;
         
         
         Car(int p,int s){
            price = p;
            seats = s;
            
         }
};
void print(Car c) // pass by reference
{
   // cout<<c.seats<<endl<<c.price<<endl;
}
int main()
{
    Car c1(150000,7);
    // c1.name= "verna";
    // c1.price = 1500000;
    // c1.engine = "honda";
    // c1.type = "Sedan";
    cout<<c1.seats<<endl<<c1.price<<endl;
  
    // cout<<endl;

    // Car c2;
    // c2.name = "seltos";
    // c2.price = 1200000;
    // c2.engine = "hyundai";
    // c2.type = "suv";
    //  cout<<c2.name<<endl<<c2.price<<endl<<c2.engine<<
    // endl<<c2.type<<endl;
    print(c1);
    // cout<<endl;
   //  print(c2);


}