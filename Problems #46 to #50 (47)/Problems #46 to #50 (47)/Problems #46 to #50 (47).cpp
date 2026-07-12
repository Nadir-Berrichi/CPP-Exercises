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

int caculate_month_to_pay(int loanamounth, int monthlypayment)
{
    return loanamounth / monthlypayment;
 }

void print_howmany_month(int numberofmonth,int monthlypayment)
{
    cout << "you need to pay " << monthlypayment << " for " << numberofmonth <<" month"<< endl;
}


int main()
{
    int loanamounth = read_postive_number("enter loanamounth you need it: ");
    int monthlypayment = read_postive_number("how much can you pay in a month: ");

    print_howmany_month(caculate_month_to_pay(loanamounth, monthlypayment), monthlypayment);
}

