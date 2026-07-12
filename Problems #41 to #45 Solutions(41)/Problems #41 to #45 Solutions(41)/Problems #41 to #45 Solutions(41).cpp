#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number = 0;


    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

float calculate_days(float hours)
{
    float days;
    return days = hours / 24;
}

float calculate_weeks(float days)
{
    float weeks;
        return weeks = days / 7;
}

int main()
{
    float hours = ReadPositiveNumber("enter number of hour: ");
    cout << calculate_days(hours) << "days\n";
    cout << calculate_weeks(calculate_days(hours)) << "weeks";
}

