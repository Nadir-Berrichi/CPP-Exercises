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

void printinvertedletter(int num)
{
    int counter = num;

    for (int i = 64 + num; i > 64; i--)
    {
       
        for (int j = counter; j >= 1; j--)
        {
            cout << char(i);
        }
        cout << "\n";
        counter--;

    }
}

int main()
{
    printinvertedletter(ReadPositiveNumber("enter a number"));
}


