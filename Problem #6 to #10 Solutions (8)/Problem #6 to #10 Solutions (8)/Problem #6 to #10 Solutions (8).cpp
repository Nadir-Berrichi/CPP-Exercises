#include <iostream>
using namespace std;

int readmark()
{
    int mark;
    cout << "enter your mark\n";
    cin >> mark;
    return mark;
}

bool ispass(int mark)
{
   return (mark >= 50);
}

void printresult(int mark)
{
   
    if (ispass(mark))
        cout << "pass\n";
    else
        cout << "fail\n";
}

int main()
{
    printresult(readmark());
}

