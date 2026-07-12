#include <iostream>
using namespace std;
void readnumber(float & a, float & d)
{
    cout << "enter a\n";
    cin >> a;
    cout << "enter d\n";
    cin >> d;
}

float calculatearea(float a, float d)
{
    float area;
    area = a * sqrt(pow(d, 2) - pow(a, 2));
    return area;

}

void printarea(float area)
{
    cout << "area of rectangle is: " << area;
}

int main()
{
    float a, d;
    readnumber(a, d);
    printarea(calculatearea(a, d));
}
