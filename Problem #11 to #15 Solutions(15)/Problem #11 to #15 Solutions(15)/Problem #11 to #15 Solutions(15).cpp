#include <iostream>
using namespace std;
void readnumber(int& a, int& b)
{
    cout << "enter a\n";
    cin >> a;
    cout << "enter b\n";
    cin >> b;
}

int calculatearea(int a, int b)
{
    int area;
    area = a * b;
    return area;

}

void printarea(int area)
{
    cout << "area of rectangle is: " << area;
}

int main()
{
    int a, b;
    readnumber(a, b);
    printarea(calculatearea(a, b));
}

