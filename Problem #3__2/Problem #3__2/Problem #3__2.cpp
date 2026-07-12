#include <iostream>
using namespace std;

int readpostivenumber(string message)
{
    int num;

    do
    {
        cout << message;
        cin >> num;
    } while (num < 0);
    return num;
}

int sumalldivisors(int num)
{
    int sumdivisors = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sumdivisors += i;
    }
    return sumdivisors;
}

bool checknumber(int num)
{
    if (num == sumalldivisors(num))
        return true;
    else
        return false;
}
void printresult(int num)
{
    if (checknumber(num))
        cout << num << " is perfect";
    else
        cout << num << " is not perfect";
}

int main()
{
    int num = readpostivenumber("enter a postive number\n");
    printresult(num);
}

