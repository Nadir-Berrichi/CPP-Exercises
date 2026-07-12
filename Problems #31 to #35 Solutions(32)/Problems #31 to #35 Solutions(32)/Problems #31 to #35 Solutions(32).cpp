#include <iostream>
using namespace std;

void readnumber(int &num,int &power)
{
   
    cout << "enter a number\n";
    cin >> num;
    cout << "enter power\n";
    cin >> power;

}

int powerofnumber(int num, int power)
{
    int sum = 1;

    for (power; power >= 1; power--)
    {
        sum *= num;
    }
    return sum;
}

void printresult(int sum)
{
    cout<<"\nthe result is: " << sum << endl;
}

int main()
{
    int num, power;
    readnumber(num, power);
    printresult(powerofnumber(num, power));

}


