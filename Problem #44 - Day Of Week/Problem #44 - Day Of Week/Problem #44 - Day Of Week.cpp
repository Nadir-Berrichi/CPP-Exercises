#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "enter a number from 1 to 7\n";
    cin >> day;
    if (day == 1)
    {
        cout << "sunday\n";
    }
    else if (day == 2)
    {
        cout << "monday\n";
    }
    else if (day == 3)
    {
        cout << "tuesday\n";
    }
    else if (day == 4)
    {
        cout << "wednesday\n";
    }
    else if (day == 5)
    {
        cout << "thursday\n";
    }
    else if (day == 6)
    {
        cout << "friday\n";
    }
    else if (day == 7)
    {
        cout << "sturday\n";
    }
    else {
        cout << "wrong number\n";
    }

    return 0;
}


