#include <iostream>
#include<cmath>
using namespace std;

int sumeven( int n)
{
    int sum = 0, i = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
   }
    return sum;
   
}

int main()
{
    int n;
   
   cout << "enter a number \n";
   cin >> n;

   cout << "sum even is:\n" << sumeven(n);
}


