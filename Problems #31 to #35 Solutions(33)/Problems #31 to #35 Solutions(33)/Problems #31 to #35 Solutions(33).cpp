#include <iostream>
using namespace std;

int readgrade()
{
    int grade;
    cout << "enter your grade:\n";
    cin >> grade;
    while (grade > 100 || grade < 0)
    {
        cout << "enter a valid grade:\n";
        cin >> grade;
    }

    return grade;
    
}

void printresult(int grade)
{
    if (grade >= 90 && grade <= 100)
        cout << "A";
    else if (grade >= 80 && grade <= 89)
        cout << "B";
    else if (grade >= 70 && grade <= 79)
        cout << "C";
    else if (grade >= 60 && grade <= 69)
        cout << "D";
    else if (grade >= 50 && grade <= 59)
        cout << "E";
    else
        cout << "F";
}

int main()
{
    printresult(readgrade());
}


