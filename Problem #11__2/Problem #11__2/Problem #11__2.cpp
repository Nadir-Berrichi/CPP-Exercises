#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int reversenum(int num)
{
    int remainder = 0;
    int reverse = 0;
    while (num > 0)
    {
        remainder = num % 10;
        num = num / 10;
        reverse = reverse * 10 + remainder;
    }
    return reverse;
}

void checkifispalindromenum(int reverse, int num)

{
    if (reverse == num)
        cout << "yes,it is a palindrome number";
    else
        cout << "No,it is not a palindrome number";

}

int main()
{
    int num = ReadPositiveNumber("enter a number");

    checkifispalindromenum(reversenum(num), num);
}

