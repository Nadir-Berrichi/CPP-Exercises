#include <iostream>
using namespace std;

int main()
{
    int pass, c = 3;

    while (c > 0)
    {
        cout << "enter password\n";
        cin >> pass;

        if (pass == 1234)
        {
            cout << "your balance 7500\n";
            return 0;
        }
        else
        {
            c--;
            cout << "wrong password. attempts left: " << c << endl;
        }
    }

    cout << "you are blocked for 30 minutes\n";

    return 0;
}


