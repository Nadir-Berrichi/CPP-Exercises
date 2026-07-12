#include <iostream>
using namespace std;

int readnumber()
{
    int num;
    cout << "enter a number: ";
    cin >> num;

    return num;
}

int sum_odd_usingfor(int num)
{
    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
            sum = sum;
        else
            sum = sum + i;
    }
    return sum;
}

int sum_odd_usingwhile(int num)
{
    int sum=0, counter=0;
    while (counter <= num)
    {
        if (counter % 2 == 0) {
            sum = sum;
            counter++;
        }
        else
        {
            sum = sum + counter;
            counter++;
        }
       
    }
    return sum;
}

int sum_odd_usingdowhile(int num)
{
    int sum = 0, counter = 0;

    do
    {
        if (counter % 2 == 0) {
            sum = sum;
            counter++;
        }
        else
        {
            sum = sum + counter;
            counter++;
        }
    }
    while (counter <= num);

        return sum;
}

void printresult(int sum)
{
    cout << "\nsum of odd number is: " << sum;
}

int main()
{
    int num = readnumber();
    printresult(sum_odd_usingfor(num));
    printresult(sum_odd_usingwhile(num));
    printresult(sum_odd_usingdowhile(num));

    return 0;
}


