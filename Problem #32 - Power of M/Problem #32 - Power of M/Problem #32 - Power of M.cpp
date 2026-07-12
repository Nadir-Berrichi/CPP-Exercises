#include <iostream>
using namespace std;

int main()
{
    int n1, m;
    int result = 1;

    cout << "enter base and exponent\n";
    cin >> n1 >> m;

    while (m >= 1)
    {
        result = result * n1;
        m--;
}

    cout << "power = " << result;

    return 0;
}

