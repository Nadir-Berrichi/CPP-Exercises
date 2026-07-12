#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void printinverted(int num)
{
    for (int i =num; i >= 1; i--)
    {
        int counter = i;
        while (counter > 0)
        {
            cout << i;
            counter--;
        }
        cout << "\n";
    }
}

int main()
{
    printinverted(ReadPositiveNumber("enter a number"));
}

