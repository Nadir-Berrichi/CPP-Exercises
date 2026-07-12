#include <iostream>
#include <cmath>
using namespace std;

float readnumber()
{
    float d;
    cout << "enter d:\n";
    cin >> d;
    return d;
}

float calculatearea(float d)
{
    float area;
    const float pi = 3.14;
    area = (pi * pow(d, 2)) / 4;
    return area;
}

void printarea(float area)
{
    cout << "the area is: " << area;
}

int main()
{
  
    printarea(calculatearea(readnumber()));
}


