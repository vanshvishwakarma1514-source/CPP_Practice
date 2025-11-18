#include<iostream>
using namespace std;
class Galaxy
{
    // Multiple inheritance
    public:
    string name;
    int planets;
    int sun;
};

class Earth : public Galaxy
{
    public :
      int country;
      int population;
};
 class India : public Earth
 {
    public :
    int states;
    int territories;

 };
 int main()
 {
    Earth e1;
    e1.country = 195;
    e1.population = 8.1;
    e1.sun = 1;
    cout<<e1.country<<endl<<e1.population<<endl<<e1.sun<<endl;

 }