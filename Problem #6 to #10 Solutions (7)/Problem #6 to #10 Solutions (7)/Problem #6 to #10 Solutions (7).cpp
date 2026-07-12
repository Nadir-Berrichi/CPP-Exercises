#include <iostream>
using namespace std;
int readnumber()
{
    int n;
    cout << "enter a number\n";
    cin >> n;
    return n;
}

int halfofnumber(int number)
{
    int half;
    half = number / 2;
    return half;
}

void printhalf(int half)
{
    cout << "half of the number is: " << half;
}

int main()
{
    printhalf(halfofnumber(readnumber()));
}

