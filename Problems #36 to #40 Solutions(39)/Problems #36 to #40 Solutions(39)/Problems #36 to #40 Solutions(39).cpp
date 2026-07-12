#include <iostream>
#include <string>
using namespace std;

void read_totalbill_and_totalcash(int& bill, int& cash)
{
    cout << "enter bill\n";
    cin >> bill;
    cout << "enter cash\n";
    cin >> cash;
}

int calculate_remainder(int bill, int cash)
{
    int remainder=0;
    while (bill > cash)
    { 
        int needTOpay = bill - cash;
        cout << "you need to pay " << to_string(needTOpay) <<" more" <<endl;
        bill -= cash;
        cin >> cash;
        
}
    remainder =cash - bill;
    return  remainder;
}

void print_remainder(int remainder)
{
    cout <<"the remainder is:" << remainder;
}

int main()
{
    int cash, bill;
    read_totalbill_and_totalcash(bill, cash);
    print_remainder(calculate_remainder(bill, cash));
}


