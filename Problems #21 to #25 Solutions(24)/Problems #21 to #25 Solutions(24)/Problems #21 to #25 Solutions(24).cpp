#include <iostream>
using namespace std;
int readage()
{
    int age;
    cout << "enter your age: ";
        cin >> age;
        return age;
}

bool validatenumberinrange(int number,int from,int to)
{
    return number >= from && number <= to;
}

void printresult(int age)
{
    if (validatenumberinrange(age,18,45))
        cout << "valid age";
    else
        cout << "invalid age";
}

int main()
{
    printresult(readage());
}
