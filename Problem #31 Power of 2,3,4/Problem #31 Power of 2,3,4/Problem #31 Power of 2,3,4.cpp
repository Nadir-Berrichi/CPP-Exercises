#include <iostream>
#include <cmath>
using namespace std;

void power(int num)
{
    cout << pow(num, 2) << endl;
    cout << pow(num, 3) << endl;
    cout << pow(num, 4) << endl;
}

int main()
{
    int num1;
    cout << "enter number: \n";
    cin >> num1;

    power(num1);

    return 0;
}

