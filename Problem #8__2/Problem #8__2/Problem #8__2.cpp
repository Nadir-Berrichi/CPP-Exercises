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

int howmanydegit(int num,int digit)
{
    int remainder = 0;
    int counter = 0;
   
    while (num > 0)
    {
        remainder = num % 10;
        num = num / 10;
        if (digit == remainder)
            counter++;
    }
    return counter;
}

int main()
{
    int num = ReadPositiveNumber("enter a number");
    int digit = ReadPositiveNumber("enter a digit");
   cout << "digit "<<digit<<" frequency is "<< howmanydegit(num,digit);
}


