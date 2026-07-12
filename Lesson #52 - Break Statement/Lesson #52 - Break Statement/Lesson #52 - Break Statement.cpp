#include <iostream>
using namespace std;

int main()
{
	int arr[10]{ 10, 20, 44 , 55, 33, 22, 99, 88, 99, 100 };
	int serchfor = 99;

	for (int i=0; i <= 10;i++ )
	{
		cout << "we are at" << i + 1 << endl;
		if (serchfor == arr[i])
		{
			cout << "we find "<<serchfor<<endl;
			break;
	}
	}
}


