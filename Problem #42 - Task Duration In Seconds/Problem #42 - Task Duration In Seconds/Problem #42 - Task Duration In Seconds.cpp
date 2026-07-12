#include <iostream>
#include <cmath>
using namespace std;
float total(float d, float h, float m, float s)
{

    return (d * 24 * 3600) + (h * 3600) + (m * 60) + (s);

}

int main()
{
    float days, hours, minutes, seconds;
    cout << "enter days and hours and minutes and seconds of work: \n";
    cin >> days >> hours >> minutes >> seconds;
    cout << total(days, hours, minutes, seconds) << endl;
    return 0;

}


