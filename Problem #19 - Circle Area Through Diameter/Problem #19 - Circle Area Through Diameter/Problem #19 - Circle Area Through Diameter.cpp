#include <iostream>
#include <cmath>
using namespace std;

float circle(float pi, float d)
{
    return (pi * pow(d, 2)) / 4;

}

int main()
{
    const double pi=3.14;
    double d;
   cout << "enter the d of circle:\n";
cin >> d;
cout << "the area of circle is: " << circle(pi,d);

return 0;
}

