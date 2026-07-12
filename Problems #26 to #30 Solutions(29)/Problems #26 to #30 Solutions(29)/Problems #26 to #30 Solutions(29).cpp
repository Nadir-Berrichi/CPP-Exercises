#include <iostream>
using namespace std;

enum enODDandEVEN {ODD,EVEN};

int readnumber()
{
    int num;
    cout << "enter a number\n";
    cin >> num;
    return num;

}

enODDandEVEN checknumber(int num)
{
    if (num % 2 == 0)
        return enODDandEVEN::EVEN;
    else
        return enODDandEVEN::ODD;
}

int sumofnumwithfor(int num)
{
    int sum = 0;
    for (int i = 0; i <= num; i++)
    {
        
        if (checknumber(i) == enODDandEVEN::EVEN)
        {
            sum += i;
        }
         
    }
    return sum;
}

int sumofnumberwithwhile(int num)
{
    int sum=0;
    int counter = 0;
    while (counter<=num)
    {
        
        if (checknumber(counter) == enODDandEVEN::EVEN)
        {
            sum += counter;
            counter++;
        }

        else
            counter++;
}

    return sum;
}

int sumofnumberwithdowhile(int num)
    {
    int sum = 0;
    int counter = 0;
    do
    {
        if (checknumber(counter) == enODDandEVEN::EVEN)
        {
            sum += counter;
            counter++;
        }

        else
            counter++;
    }
    while (counter <= num);

    return sum;
    }

void printresult(int sum)
{
    cout << sum << endl;
}

int main()
{
    printresult(sumofnumwithfor(readnumber()));

    printresult(sumofnumberwithwhile(readnumber()));

    printresult(sumofnumberwithdowhile(readnumber()));

    return 0;
}

