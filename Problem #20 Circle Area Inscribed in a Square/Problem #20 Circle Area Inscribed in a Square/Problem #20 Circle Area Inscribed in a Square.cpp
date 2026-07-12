#include <iostream>
using namespace std;

float circle(float pi, float a)
{
    return (pi * pow(a / 2, 2));

}


int main()

{
    float a;
    const double pi = 3.14;
    cout << "entre a:\n";
    cin >> a;
   
    cout << "area is: " << circle(pi,a);

    return 0;
}

