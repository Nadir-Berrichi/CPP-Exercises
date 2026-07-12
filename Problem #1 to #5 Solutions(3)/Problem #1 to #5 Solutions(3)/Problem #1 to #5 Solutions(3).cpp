#include <iostream>   
#include <string>     

using namespace std;  

enum ENtypeofnumber{odd,even};

int readnumber()
{
    int n;
    cout << " enter any number\n";
        cin >> n;
        return n;

}

ENtypeofnumber typeofnumber(int x)
{
    if (x % 2 == 0)
    {
        return ENtypeofnumber::even;
    }

    else
    {
        return ENtypeofnumber::odd;
    }
}

void printtype(ENtypeofnumber typeofnumber)
{
    if (typeofnumber==ENtypeofnumber::even)
    {
        cout << "number is even\n";
    }

    else
    {
        cout << "number is odd\n";
    }

}






int main()
{
   
    printtype(typeofnumber(readnumber()));

    return 0;  
}

