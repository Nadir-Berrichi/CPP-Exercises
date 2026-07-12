#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;  
    {
        cout << Message << endl;  
        cin >> Number;            
    } while (Number <= 0);       

    return Number;  
}

int CountDigitFrequency(short DigitToCheck, int Number)
{
    int FreqCount = 0;
    int Remainder = 0;


    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        if (DigitToCheck == Remainder)
        {
            FreqCount++;
        }
    }
    return FreqCount;
}

void printfreqdigit(int num)
{
    int counter = 0;
    for (int i = 0; i < 10; i++)
    {
        counter = CountDigitFrequency(i, num);
        if(counter>0)
            cout << "\nDigit " << i << " Frequency is "
            << CountDigitFrequency(i,num) << " Time(s).\n";

}
}


int main()
{
    int num = ReadPositiveNumber("enter a number");

    printfreqdigit(num);
}
