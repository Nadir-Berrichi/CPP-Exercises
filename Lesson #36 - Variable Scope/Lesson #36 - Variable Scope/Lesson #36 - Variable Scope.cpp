
#include <iostream>
using namespace std;

int x=100;

void myfunction()
{
    int x = 200;

    cout << "function number" << x;

}


int main()
{
    int x = 300;
    ::x++;
    cout << "global number" << ::x << endl;
        cout << "main number" << x << endl;
        myfunction();
        
}

