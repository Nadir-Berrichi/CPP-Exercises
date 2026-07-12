#include <iostream>
using namespace std;

int main()
{
	float billvalue;
	cout << "enter bill: \n";
	cin >> billvalue;
	float total = (billvalue * 1.1) * 1.16;
	cout << total;

	return 0;
}


