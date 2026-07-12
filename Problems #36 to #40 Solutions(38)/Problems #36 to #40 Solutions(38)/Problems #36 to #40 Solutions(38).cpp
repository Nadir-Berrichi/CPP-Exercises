#include <iostream>
using namespace std;

enum enPRIMEnum { prime,notprime};

int readnumber(string message)
{
    int num;
    cout << message << endl;;
    cin >> num;
    return num;
}

enPRIMEnum checknumber(int num)
{
    if (num < 2)
        return enPRIMEnum::notprime;

    int m = round(num / 2);
    for (int i = 2; i <= m; i++)
    {
        if (num % i == 0)
            return enPRIMEnum::notprime;
    }

    return enPRIMEnum::prime;

}

void printresult(enPRIMEnum result)
{
    if (result == prime)
        cout << "its prime number";
    else
        cout << "its notprime number";
}

int main()
{
   
    printresult( checknumber(readnumber("enter a number\n")));
}


