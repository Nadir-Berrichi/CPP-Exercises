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

void printletter(int num)
{
    for (int i = 65; i <= num+64; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            cout << char(i);
        }
        cout << "\n";
    }
}


int main()
{
    printletter(ReadPositiveNumber("enter a number"));
}
