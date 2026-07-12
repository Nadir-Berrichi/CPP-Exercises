#include <iostream>
using namespace std;

void readnumber(int &num1,int &num2)
{
    cout << "enter number 1\n";
    cin >> num1;
    cout << "enter number 2\n";
    cin >> num2;

    
}

string opertion()
{
    string op;
    cout << "enter the operation type\n";
    cin >> op;
    return op;
}

int calculate(int num1, int num2, string op)
{
    if (op == "+")
        return num1 + num2;
    else if (op == "-")
        return num1 + num2;
    else if (op == "*")
        return num1 * num2;
    else if (op == "/")
        return num1 / num2;
}

void result(int result)
{
    cout << "result: " << result;
}

int main()
{
    int num1, num2;
    readnumber(num1, num2);
    result(calculate(num1, num2, opertion()));
}


