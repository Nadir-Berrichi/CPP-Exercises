#include <iostream>
using namespace std;

int main()
{
	int n, sum=0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "enter a number ";
		cin >> n;
		if (n > 50)
		{
			continue;
		}
		sum = sum + n;
		
	}
	cout << sum;

}

