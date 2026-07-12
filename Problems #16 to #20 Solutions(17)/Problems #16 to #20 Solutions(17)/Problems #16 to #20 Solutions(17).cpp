#include <iostream>
using namespace std;
void readnumber(float& a, float& h)
{
    cout << "enter a\n";
    cin >> a;
    cout << "enter h\n";
    cin >> h;
}

float calculatearea(float a, float h)
{
    float area;
    area = a / 2 * h;
    return area;

}

void printarea(float area)
{
    cout << "area of rectangle is: " << area;
}

int main()
{
    float a, h;
    readnumber(a, h);
    printarea(calculatearea(a, h));

    return 0;
}
