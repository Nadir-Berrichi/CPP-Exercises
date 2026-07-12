#include <iostream>
using namespace std;

void readmark(int &mark1, int &mark2, int &mark3)
{
	cout << "enter mark1\n";
	cin >> mark1;
	cout << "enter mark2\n";
	cin >> mark2;
	cout << "enter mark3\n";
	cin >> mark3;
}

int sumofmark(int mark1, int mark2, int mark3)
{
	return mark1 + mark2 + mark3;
}

float averageofmark(int mark1, int mark2, int mark3)
{
	float average;
	average = (float)sumofmark(mark1, mark2, mark3) / 3;
	return average;
}

bool ispass(float average)
{
	return average >= 50;
}

void result(float average)
{
	if (ispass(average))
		cout << average << "\npass";
	else
		cout << average << "\nfail";
}



int main()
{
	int mark1, mark2, mark3;
	readmark(mark1, mark2, mark3);
	result(averageofmark(mark1, mark2, mark3));
		
}

