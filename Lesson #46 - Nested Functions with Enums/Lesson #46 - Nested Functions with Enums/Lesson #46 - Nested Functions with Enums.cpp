#include <iostream>
using namespace std;

enum enOperationType{addition=1, Subtraction=2, Multiplication=3, Division=4};

void ShowOperationMenu()
{
    cout <<"*********************\n";
    cout <<"     OperationType    \n";
    cout <<"*********************\n";
    cout << "(1) addition\n";
    cout << "(2) Subtraction\n";
    cout << "(3) Multiplication\n";
    cout << "(4) Division\n";
}

enOperationType ReadOperationType()
{
    int op;
    cout << "choose an Operation Type \n";
    cin >> op;
      return (enOperationType) op;

}

string GetOperationName(enOperationType op)
{
    switch (op)
    {
    case enOperationType::addition:
    return "addition";
        break;
    case  enOperationType::Subtraction:
    return "Subtraction";
    break;
    case  enOperationType::Multiplication:
    return "Multiplication";
    break;
    case  enOperationType::Division:
    return "Division";
    break;
default:
    return "wrong Operation Type\n";
    
    }

}










int main()
{

    ShowOperationMenu();

    cout << "Operation is: " << GetOperationName(ReadOperationType());
    

    return 0;
}

