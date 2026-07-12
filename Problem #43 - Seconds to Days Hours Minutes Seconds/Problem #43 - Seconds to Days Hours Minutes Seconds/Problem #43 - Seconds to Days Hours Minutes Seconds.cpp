#include <iostream>
using namespace std;

void total(int seconds)
{
    int days, hours, minutes, remainingSeconds;

    days = seconds / 86400;
    seconds = seconds % 86400;

    hours = seconds / 3600;
    seconds = seconds % 3600;

    minutes = seconds / 60;
    remainingSeconds = seconds % 60;

    cout << "Days: " << days << endl;
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << remainingSeconds << endl;
}

int main()
{
    int seconds;
    cout << "Enter seconds:\n";
    cin >> seconds;

    total(seconds);  

    return 0;
}

