#include <iostream>
using namespace std;

int readnumber()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    return num;
}

void printnumber_usingfor(int num)
{
    for (int i = num; i >= 1; i--)
    {
        cout << i << endl;
    }
    cout << "***********************************************\n";
}

void printnumber_usingwhile(int num)
{
    int counter = num;
    while (counter >= 1)
    {
        cout << counter << endl;
        counter--;
    }
    cout << "***********************************************\n";
}

void printnumber_usingdowhile(int num)
{
    int counter = num;
    do
    {
        cout << counter << endl;
        counter--;
    } while (counter >= 1);
    cout << "***********************************************\n";
}



int main()
{
    printnumber_usingfor(readnumber());

    printnumber_usingwhile(readnumber());

    printnumber_usingdowhile(readnumber());

}
