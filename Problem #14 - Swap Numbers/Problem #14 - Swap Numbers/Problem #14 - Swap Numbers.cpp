#include <iostream>

using namespace std;


void swapfunction(int &a,int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;


}

int main()
{
	int n1,n2;
	cout << "enter 2 number to swap\n";
	cin >> n1 >> n2;
	swapfunction(n1, n2);
	cout<<n1<<endl<<n2<<endl;
	
	
	

   return 0;

   
}

