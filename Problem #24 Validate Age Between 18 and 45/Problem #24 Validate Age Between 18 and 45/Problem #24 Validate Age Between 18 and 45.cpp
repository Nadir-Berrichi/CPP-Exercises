#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "how old are you\n";
    cin >> age;
    if (age >= 18 && age <= 45)
    {
        cout << "valid age\n";

    }
    else {

        cout << "invalid age\n";
    }

}

