#include <iostream>
using namespace std;

void readnumber(float& a, float& b,float &c)
{
    cout << "enter a:\n";
    cin >> a;
    cout << "enter b:\n";
    cin >> b;
    cout << "enter b:\n";
    cin >> c;


}


float calculatearea(float a, float b,float c)

{
    float area;
    const float pi = 3.14;
    float p;
    p = (a + b + c) / 2;

   
    area = pi*pow((a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c))),2);
    return area;
}

void printarea(float area)
{
    cout << "the area is: " << area;
}
int main()
{
    float a, b,c;

    readnumber(a, b,c);
    printarea(calculatearea(a, b,c));
    return 0;
}
