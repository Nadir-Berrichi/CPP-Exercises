#include <iostream>
using namespace std;

struct STallduration
{
    float days,hours,minutes,seconds;
};

STallduration readduration()
{ 
    STallduration duration;
    cout << "enter days:\n";
    cin >> duration.days;
    cout << "enter hours:\n";
    cin >> duration.hours;
    cout << "enter minutes:\n";
    cin >> duration.minutes;
    cout << "enter seconds:\n";
    cin >> duration.seconds;

    return duration;

}

float calculate_all_duration_to_seconds(STallduration duration)
{
    float totalseconds;
    totalseconds = duration.days * 24 * 60 * 60;
    totalseconds += duration.hours * 60 * 60;
    totalseconds += duration.minutes * 60;
    totalseconds += duration.seconds;
    return totalseconds;
}

int main()
{
   cout<<calculate_all_duration_to_seconds(readduration())<<" seconds";
}


