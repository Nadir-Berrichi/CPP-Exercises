#include <iostream>
using namespace std;

int main()
{
    float penny, nickel, dime, quarter, dollar;
    cout << "enter how many penny and nickel and dime and quarter and dollar:\n";
    cin >> penny >> nickel >> dime >> quarter >> dollar;
    float pennies = (penny * 1) + (nickel * 5) + (dime * 10) + (quarter * 25) + (dollar * 100);
    float dollars = pennies / 100;
    cout << dollars << " dollars\n";
    cout << pennies << " pennies\n";

        return 0;
}

