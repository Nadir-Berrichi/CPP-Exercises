// problem #23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;

float circle(float pi,float a, float b, float c,float p)
{
   
    return pi * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);

}

int main()
{
    float a, b, c;
    float pi = 3.14;
    cout << "enter a b c\n";
    cin >> a >> b >> c;
    float p = (a + b + c) / 2;
    cout << "the area is:" << circle(pi, a, b, c, p);
}

