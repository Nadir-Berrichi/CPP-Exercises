#include <iostream>
#include <cmath>

using namespace std;
float siderectangle(float a,float d)
{
return a * sqrt(pow(d, 2) - pow(a, 2));

}

int main()
{
    float a, d;
    cout << "enter a and d:\n";
    cin >> a >> d;
    cout << siderectangle(a,d);
   
    return 0;
}

