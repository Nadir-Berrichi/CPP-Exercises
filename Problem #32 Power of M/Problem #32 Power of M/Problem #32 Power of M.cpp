#include <iostream>
#include <cmath>

using namespace std;
int calcu(int num, int m)
{
    return pow(num, m);

}

int main()

{
    int num, m;

  cout << "enter number and m:\n";

  cin >> num >> m;

  cout << calcu(num,m);

  return 0;
}

