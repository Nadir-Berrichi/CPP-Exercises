#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    
    float pi = 3.14;

    cout << "enter a and b and c :\n";
    cin >> a >> b >> c;

    float p = (a + b + c) / 2;
    
    float area = pi * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);

    cout <<  round (area);

    return 0;
}

