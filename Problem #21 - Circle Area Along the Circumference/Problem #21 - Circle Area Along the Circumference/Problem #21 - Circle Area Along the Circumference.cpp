#include <iostream>
#include <cmath>
using namespace std;
float circle(float pi, float l)
{
    return (pow(l, 2) / (4 * pi));

}

int main()
{
    float l;
    const float pi = 3.14;
    cout << "enter l: \n";
    cin >> l;
        cout << "the area is: " <<circle(pi,l);

        return 0;
}

