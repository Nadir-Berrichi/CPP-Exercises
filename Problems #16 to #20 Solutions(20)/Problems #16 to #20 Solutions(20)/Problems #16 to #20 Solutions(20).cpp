#include <iostream>
using namespace std;

float readnumber()
{
    float a;
    cout << "enter a:\n";
    cin >> a;
    return a;
}

float calculatearea(float a)
{
    float area;
    const float pi = 3.14;
    area = (pi * pow(a, 2)) / 4;
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


