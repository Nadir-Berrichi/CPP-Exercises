#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "enter your grade\n";
    cin >> grade;
    if (grade >= 90 && grade <= 100)
    {
        cout << "A\n";
}
    else if(grade >= 80 && grade <= 89)
    {
        cout << "B\n";
    }
    else if (grade >= 70 && grade <= 79)
    {
        cout << "C\n";
    }
    else if (grade >= 60 && grade <= 69)
    {
        cout << "D\n";
    }
    else if (grade >= 50 && grade <= 59)
    {
        cout << "E\n";
    }
    else if (grade>=0&&grade<=49)
    {
        cout << "F\n";
    }

    else {

        cout << "your mark is false\n";
    }

    return 0;
}

