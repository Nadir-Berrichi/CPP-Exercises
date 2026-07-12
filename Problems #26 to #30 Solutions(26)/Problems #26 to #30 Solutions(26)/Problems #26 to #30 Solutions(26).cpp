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
    for (int i = 1; i <= num; i++)
    {
        cout << i<<endl;
    }
    cout << "***********************************************\n";
}

void printnumber_usingwhile(int num)
{
    int i = 1;
    while (i <= num)
    {
        cout << i << endl;
        i++;
}
    cout << "***********************************************\n";
}

void printnumber_usingdowhile(int num)
{
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= num);
    cout << "***********************************************\n";
}



int main()
{
    printnumber_usingfor(readnumber());

    printnumber_usingwhile(readnumber());

    printnumber_usingdowhile(readnumber());

}

