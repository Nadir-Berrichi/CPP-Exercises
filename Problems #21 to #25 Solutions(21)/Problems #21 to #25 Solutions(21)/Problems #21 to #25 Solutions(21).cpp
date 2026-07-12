#include <iostream>
using namespace std;

float readnumber()
{
    float l;
    cout << "enter l:\n";
    cin >> l;
    return l;

}

float calculatearea(float l)
{
    float area;
    const float pi = 3.14;
    area = pow(l, 2) / (4 * pi);
    return area;
}

void printarea(float area)
{
    cout << "the area is: " << area;
}
int main()
{
    printarea(calculatearea(readnumber()));
    return 0;
}


