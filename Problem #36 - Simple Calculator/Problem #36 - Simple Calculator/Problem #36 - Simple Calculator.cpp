#include <iostream>
using namespace std;

int main()
{
    double n1, n2;
    char op;

    cout << "enter n1 and n2 and opiration type\n";
    cin >> n1 >> n2 >> op;

    if (op == '+')
        cout << n1 + n2 << endl;
    else if (op == '-')
        cout << n1 - n2 << endl;
    else if (op == '*')
        cout << n1 * n2 << endl;
    else if (op == '/')
    {
        if (n2 == 0) {
            cout << "cannot divide by zero\n";
        }
        else
        {
            cout << n1 / n2 << endl;
        }
    }
    else
        cout << "invalid operation\n";

    return 0;
}


