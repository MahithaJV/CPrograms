#include <iostream>
#include <string>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;

public:
    // setter
    void setvalue(int f,float i)
    {
    feet=f;
    inches=i;

    }
    // getter
    void showvalue()
    {
        cout << feet << endl;
        cout << inches << endl;
    }
    

    // non-parameterised
    Distance()
    {
        feet = 0;
        inches = 0.0;
    }
    // parameterised constructor
    Distance(int f, float i)
    {
        feet = f;
        inches = i;
    }
    // outline function
    Distance addDistance(Distance d1, Distance d2);
};
Distance Distance::addDistance(Distance d1, Distance d2)
{
    Distance d3;
   d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;
    return d3;
}
int main()
{
    Distance d1, d2, d3;
    d1.showvalue();
    d2.setvalue(5,3.2);
    d2.showvalue();
    d3=d3.addDistance(d1, d2);
    d3.showvalue();
    return 0;
}