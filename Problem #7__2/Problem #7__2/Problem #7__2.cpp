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

int reversnumber(int num)
{
    int remainder = 0;
    int num2 = 0;
    while (num > 0)
    {
        remainder = num % 10;
        num = num / 10;
        num2 = num2 * 10 + remainder;

   }
    return num2;
   
}

int main()
{
    cout<< reversnumber(ReadPositiveNumber("enter a number"));
}

