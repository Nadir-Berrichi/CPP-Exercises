#include <iostream>
#include <cmath>

using namespace std;

float circle(float pi , float r)
{
    return pi * pow(r, 2);

}

int main()
{
    float r;
    float pi = 3.14;
   cout << "enter r :\n";
   cin >> r;
   
   cout <<circle(pi,r);

   return 0;
}


