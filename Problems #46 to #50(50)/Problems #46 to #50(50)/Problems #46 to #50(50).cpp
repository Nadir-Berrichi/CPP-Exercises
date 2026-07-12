#include <iostream>
using namespace std;

string readpin()
{
    string pin;
    cout << "enter your pin code: \n";
    cin >> pin;
    return pin;
}

bool login(string pin)
{
    for (int i = 3; i >= 1; i--)
    {
        if (pin == "1234")
        {
            return 1;
        }
        else
        {
            system("color 4F");
            cout << "wrong PIN \n" << "you have " << i << " chance\n";
            pin = readpin();
        }
    }
    return 0;
}

int main()
{
    if (login(readpin()))
    {
        system("color 2F");
        cout << "\nYour account balance is " << 7500 << '\n';
    }
    else
    {
        system("color 4F");
        cout << "your account is locked";
    }
    
}


