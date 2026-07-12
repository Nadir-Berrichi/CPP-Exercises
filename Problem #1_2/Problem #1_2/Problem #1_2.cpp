#include <iostream>   
using namespace std;  

void headertable()
{
    cout << "\n\n\t\t\tMultiplication Table From 1 to 10\n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n----------------------------------------------------------------------------------\n";
}


string columeseperator(int num)
{
    if (num < 10)
        return "    |";
    else
        return "   |";
        
}


void PrintMultiplicationTable()
{
    headertable();
    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << columeseperator(i) << "\t";
        
        for (int j = 1; j <= 10; j++)
        {
            cout << j * i << "\t";
        }
        cout << "\n";
    }

}

int main()
{
   
    PrintMultiplicationTable();


    return 0;
}

