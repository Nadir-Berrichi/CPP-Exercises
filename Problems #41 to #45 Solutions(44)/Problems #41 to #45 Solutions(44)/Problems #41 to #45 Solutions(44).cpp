#include <iostream>
using namespace std;

int readnumber(string message)
{
    int num;
    do
    {
        cout << message;
        cin >> num;
    } while (num <  0 || num > 7);

    return num;
}

string dayofweek(int num)
{
    int day = num;
    switch (day) {

    case 1:
        return "its sunday";
            case 2:
                return "its monday";
            case 3:
                return "its tuesday";
            case 4:
                return "its wednesday";
            case 5:
                return "its thursday";
            case 6:
                return "its friday";
            case 7:
                return "its saturday";
           
    }
}


int main()
{
    cout << dayofweek(readnumber("please enter a number of week from 1 to 7\n"));
}

