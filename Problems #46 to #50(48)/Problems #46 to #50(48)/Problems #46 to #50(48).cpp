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

int caculate_monthly_payment(int loanamounth, int numberofmonth)
{
    return loanamounth / numberofmonth;
}

void print_howmany_month(int numberofmonth, int monthlypayment)
{
    cout << "you need to pay " << monthlypayment << " for " << numberofmonth << " month" << endl;
}


int main()
{
    int loanamounth = read_postive_number("enter loanamounth you need it: ");
    int numberofmonth = read_postive_number("how many month do you need to pay: ");

    print_howmany_month(numberofmonth, caculate_monthly_payment(loanamounth, numberofmonth));
}

