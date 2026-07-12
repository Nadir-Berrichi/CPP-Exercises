#include <iostream>
using namespace std;
void readnumber(float& r)
{
    cout << "enter r\n";
    cin >> r;
  
}

float calculatearea(float r)
{
    float area;
    float pi = 3.14;
    area = pi *pow( r,2);
    return area;

}

void printarea(float area)
{
    cout << "area of rectangle is: " << area;
}

int main()
{
    float r;
    readnumber(r);
    printarea(calculatearea(r));

    return 0;
}
