#include <iostream>
using namespace std;


int main()
{
	int tot, cash;
  cout << "enter totalbill and cashbill: \n";
  cin >> tot >> cash;
  int paidback = cash-tot;
  cout << paidback;

  return 0;
}
