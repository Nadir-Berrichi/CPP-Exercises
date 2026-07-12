#include <iostream>
using namespace std;
void readnumber(int &n1, int &n2, int &n3)
{
    cout << "enter n1\n";
    cin >> n1;
    cout << "enter n2\n";
    cin >> n2;
    cout << "enter n3\n";
    cin >> n3;
}

int checknumber(int n1, int n2, int n3)
{
    if (n1 > n2 && n1 > n3)
        return n1;
    else if (n2 > n3)
        return n2;
    else
        return n3;
}

void printnumber(int n1, int n2, int n3)
{
    cout << "the max number is: " << checknumber(n1, n2,n3);
}

int main()
{
    int n1, n2, n3;
    readnumber(n1, n2,n3);
    printnumber(n1,n2,n3);
}


