#include <iostream>
using namespace std;

void readnumber(float &a,float &b)
{
    cout << "enter a:\n";
    cin >> a;
    cout << "enter b:\n";
    cin >> b;
   

}

float calculatearea(float a, float b)
{
    float area;
    const float pi = 3.14;
    area = ((pi * pow(b, 2)) / 4) * ((2 * a - b) / (2 * a + b));
    return area;
}

void printarea(float area)
{
    cout << "the area is: " << area;
}
int main()
{
    float a, b;
    readnumber(a, b);
    printarea(calculatearea(a,b));
    return 0;
}