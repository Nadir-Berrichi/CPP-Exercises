#include <iostream>
using namespace std;

int main()
{
	int n;
	int facto=1;
	
	cout << "enter a number:\n ";
	cin >> n;
	while (n >= 1)
	{
		facto = facto * n;
		n--;
}
	cout << facto << endl;

	
}


