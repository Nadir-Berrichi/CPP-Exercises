#include <iostream>
using namespace std;

int main()
{
	int age;
	bool driverlicense;
	cout << "how old are you ?\n";
	cin >> age;
	cout << "do you have a driverlicense ?\n";
	cin >> driverlicense;
	if (age >= 21 && driverlicense)
	{
		cout << "hired\n";

	}
	else {
		cout << "rejected\n";


	}
   
}


