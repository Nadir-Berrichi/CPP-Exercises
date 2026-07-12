//Print Sum Odd Numbers from 1 to N
#include <iostream>
#include <string>
using namespace std;


int sumadd(int sum, int n)
{
	int i=1;
	while (i <= n)
	{
		sum = sum + i;
		i+=2;
		
		
		
	}

	return sum;
}

int main()
{
	int n;
	int sum = 0;
	cout << "enter a number\n";
	cin >> n;

	cout << "the sum is: " << sumadd(sum, n);

	return 0;
}

