#include <iostream>
using namespace std;

enum enMonth
{
    Jan = 1,
    Feb = 2,
    Mar = 3,
    Apr = 4,
    May = 5,
    Jun = 6,
    Jul = 7,
    Aug = 8,
    Sep = 9,
    Oct = 10,
    Nov = 11,
    Dec = 12
};

int readnumberinrange(int from, int to)
{
    int num;
    do {
        cout << "enter a number from " << from << " to " << to << endl;
        cin >> num;
    } while (num<from || num>to);

        return num;
}

enMonth getmonth(int num)
{
    return (enMonth)num;
}

void printmonth(enMonth month)
{
    switch (month)
    {
    case enMonth::Jan:
        cout << "It's January";
        break;

    case enMonth::Feb:
        cout << "It's February";
        break;

    case enMonth::Mar:
        cout << "It's March";
        break;

    case enMonth::Apr:
        cout << "It's April";
        break;

    case enMonth::May:
        cout << "It's May";
        break;

    case enMonth::Jun:
        cout << "It's June";
        break;

    case enMonth::Jul:
        cout << "It's July";
        break;

    case enMonth::Aug:
        cout << "It's August";
        break;

    case enMonth::Sep:
        cout << "It's September";
        break;

    case enMonth::Oct:
        cout << "It's October";
        break;

    case enMonth::Nov:
        cout << "It's November";
        break;

    case enMonth::Dec:
        cout << "It's December";
        break;

    
    }
}


int main()
{
    printmonth(getmonth(readnumberinrange(1, 12)));
}


