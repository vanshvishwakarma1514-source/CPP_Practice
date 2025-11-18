#include<iostream>
using namespace std;
class Vehicle  // parent class
{
    public :
        string name;
        int topspeed;
        float mileage;
        string fuel;
        int gear;
};
 class Car : public Vehicle // child class / derived class
 {
    public:
    
 };

 class Truck : public Vehicle
 {
    public :
 };

 class Bike : public Vehicle
 {
    public :
 };

 int main()
 {
    Bike b1;
    b1.name = "Raider";
    b1. topspeed = 120;
    b1.gear = 5;
    b1.mileage = 62;
    cout<<b1.name<<endl<<b1.topspeed<<endl<<b1.gear<<endl<<b1.mileage<<endl;
 }
 