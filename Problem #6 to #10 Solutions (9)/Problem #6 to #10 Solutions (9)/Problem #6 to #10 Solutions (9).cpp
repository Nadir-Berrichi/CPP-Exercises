#include <iostream>
using namespace std;

void readnumber(int &num1, int &num2, int &num3)
{
   
    cout << "enter num1\n";
    cin >> num1;
    cout << "enter num2\n";
    cin >> num2;
    cout << "enter num3\n";
    cin >> num3;
    
}

int sumofnumber(int num1, int num2, int num3)
{
    int sum = 0;
    sum = num1 + num2 + num3;
        return sum;
}

void printresult(int sum)
{
    cout<<"the sum of  number  is: " << sum;
}




int main()
{
    int num1, num2, num3;
    readnumber(num1, num2, num3);
    printresult(sumofnumber(num1, num2, num3));
}


