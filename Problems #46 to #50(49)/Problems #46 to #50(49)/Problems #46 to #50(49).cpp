#include <iostream>
using namespace std;

int read_postive_number(string message)
{
    int num;
    do
    {
        cout << message << endl;
        cin >> num;

    } while (num <= 0);

    return num;
}

string checkpin(int num)
{
    while (num != 1234)
    {
        
        num=read_postive_number("wrong PIN enter a valid PIN: \n");

    }
    if (num == 1234)
    {
        return "\nyour balance is : 7500 ";
    }
}


int main()
{
   cout<< checkpin(read_postive_number("enter your pin"));
}

