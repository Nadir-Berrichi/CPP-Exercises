#include <iostream>
#include <cmath>
using namespace std;

float circle(float pi, float a, float b)
{
    return pi * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));


}

int main()
{
    float a, b;
    const double pi = 3.14;
    cout << "enter a and b :\n";
    cin >> a >> b;
    cout << "the area is: " <<circle(pi,a,b);

    return 0;
}

