#include <iostream>
using namespace std;

int readnumber()
{
    int num;
    cout << "enter a number\n";
    cin >> num;
    return num;

}

int powerofnumber(int num,int counter)
{
    int sum = 1;
   
    for (counter; counter >= 1; counter--)
    {
        sum *= num;
}
    return sum;
}

void printresult(int sum)
{
    cout << sum << endl;
}


int main()
{
    int num = readnumber();
    printresult(powerofnumber(num, 2));
    printresult(powerofnumber(num, 3));
    printresult(powerofnumber(num, 4));
}

