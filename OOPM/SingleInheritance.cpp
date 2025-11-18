#include<iostream>
using namespace std;
class Scooty
{
    public :
        int topspeed;
        float mileage;
        int gear;
};
 class Bike : public Scooty
 {
    public:
    string name;
     int gear;
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
 