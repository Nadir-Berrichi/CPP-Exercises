#include <iostream>
using namespace std;

int rectangle(int a, int b)
{
	return a * b;

}

int main()
{
	int a, b;
	cout << "enter a and b\n";
	cin >> a >> b;
	cout << rectangle(a, b);
   return 0;

}
