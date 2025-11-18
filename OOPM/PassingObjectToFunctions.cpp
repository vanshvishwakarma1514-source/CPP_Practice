#include<iostream>
using namespace std;
class car
{
    public :
      string name;
      string type;
      int seats;
};
void print(car c)
{
    cout<<c.name<<" "<<c.type<<" "<<c.seats<<endl;
}
int main()
{
    car c1;
    c1.name = "honda";
    c1.type = "sedan";
    c1.seats = 8;
    print(c1);
}