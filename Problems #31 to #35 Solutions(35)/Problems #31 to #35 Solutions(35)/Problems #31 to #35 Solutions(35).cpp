#include <iostream>
using namespace std;

void readmoney(int &penny,int &nickel,int &dime,int &quarter,int &dollar)
{
    cout << "enter how many penny: ";
    cin >> penny;
    cout << "enter how many nickel: ";
    cin >> nickel;
    cout << "enter how many dime: ";
    cin >> dime;
    cout << "enter how many quarter: ";
    cin >> quarter;
    cout << "enter how many dollar: ";
    cin >> dollar;
}

int calculatepennies(int penny, int nickel, int dime, int quarter, int dollar)
{
    int pennies;
    pennies = (penny)+(nickel * 5) + (dime * 10) + (quarter * 25) + (dollar * 100);
    return pennies;
}

float calculatedollar(int pennies)
{
    float dollars;
    dollars = (float) pennies / 100;
    return dollars;
}

void printresult(int pennies, float dollars)
{
    cout << pennies << endl;
    cout << dollars<<endl;
}

int main()
{
    int  penny, nickel, dime, quarter, dollar,pennies;
    float dollars;
    readmoney(penny, nickel, dime, quarter, dollar);
    pennies = calculatepennies(penny, nickel, dime, quarter, dollar);
    dollars = calculatedollar(pennies);
    printresult(pennies, dollars);
   
}

