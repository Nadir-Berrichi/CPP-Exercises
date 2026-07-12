#include <iostream>
using namespace std;

int readnumber()
{
    int num;
    cout << "enter a number\n";
    cin >> num;
    return num;
}

int factorial_using_for(int num)
{
    int sum = 1;
    for (int i = num; i >= 1; i--)
    {
        sum *= i;
    }
    return sum;
}

int factorial_using_while(int num)
{
    int sum = 1;
    int counter = num;
    while (counter >= 1)
    {
        sum *= counter;
        counter--;
    }
    return sum;
}

int factorial_using_do_while(int num)
{
    int sum = 1;
    int counter = 0;
    do
    {
        counter++;

        sum *= counter;

    } 
    while (counter < num);
        return sum;
}

void printresult(int sum)
{
    cout << sum << endl;
}

int main()
{
   printresult(factorial_using_for(readnumber()));

   printresult(factorial_using_while(readnumber()));

   printresult(factorial_using_do_while(readnumber()));

   return 0;
}


