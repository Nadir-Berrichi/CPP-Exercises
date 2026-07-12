#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int num = 0;



    while (num != -99)
    {
        sum = sum + num;
        cout << " enter num :\n";
        cin >> num;
    }
    cout << sum << endl;
    return 0;
}


