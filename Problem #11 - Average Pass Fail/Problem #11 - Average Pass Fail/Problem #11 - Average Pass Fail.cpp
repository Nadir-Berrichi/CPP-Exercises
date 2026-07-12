#include <iostream>
using namespace std;

int main()
{
	float mark1, mark2, mark3;
  cout << "enter your mark1, mark2, mark3 \n";
  cin >> mark1 >> mark2 >> mark3;
  float average;
  average = (mark1 + mark2 + mark3) / 3;

  if (average >= 50)
  {
	  cout << "pass\n";

 }
  else {
	  cout << "fail\n";
  }


}


