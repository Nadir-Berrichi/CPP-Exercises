#include <iostream>
using namespace std;

int readnumber()
{
    int n;
    cout << "enter a number\n";
    cin >> n;
    return n;
}


void printnumber(int x)
{
    int n = 0;
    while (n <= x)
    {
        cout << x-- << endl;
    }
}

int main()
{
    printnumber(readnumber());
}

