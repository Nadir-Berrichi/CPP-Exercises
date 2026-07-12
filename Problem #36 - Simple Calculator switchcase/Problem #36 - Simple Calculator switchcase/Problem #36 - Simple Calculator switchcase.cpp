#include <iostream>
using namespace std;

int main()
{
    double n1, n2;
    cout << "enter n1\n";
    cin >> n1;

    cout << "enter n2\n";
    cin >> n2;

    char op;
    cout << "enter operation type\n";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        if (n2 == 0)
            cout << "cannot divide by zero\n";
        else
            cout << n1 / n2 << endl;
        break;
    default:
        cout << "wrong operation\n";
    }

    return 0;
}














}

