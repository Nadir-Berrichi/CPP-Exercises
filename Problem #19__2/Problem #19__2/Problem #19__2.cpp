#include <iostream>   
#include <string>     
#include <cstdlib>    
#include <ctime>   
using namespace std;

int randomnumber(int from ,int to)
{
    int randnum;

    randnum = rand() % (to - from + 1) + from;
    return randnum;
}

int main()
{
    srand((unsigned)time(NULL));

    for (int i = 1; i < 10; i++)
    {
        cout << randomnumber(0, 10)<<endl;
    }
}

