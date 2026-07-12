#include <iostream>
using namespace std;

int main()
{
	int totalsales;
   cout << "enter your total sales\n";
   cin >> totalsales;
   if (totalsales >= 50000 && totalsales <= 100000)
   {
	   cout << totalsales * 0.05;
   }
   else if (totalsales > 100000 && totalsales <= 500000)
   {
	   cout << totalsales * 0.03;
   }
   else if (totalsales > 500000 && totalsales <= 1000000)
   {
	   cout << totalsales * 0.02;
   }
   else if (totalsales > 1000000 )
   {
	   cout << totalsales * 0.01;
   }
   else
   {
	   cout << 0;
   }
   return 0;
}

