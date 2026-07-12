#include <iostream>
using namespace std;

void readmark(int &mark1,int &mark2,int &mark3)
{
    cout << "enter mark1\n";
    cin >> mark1;
    cout << "enter mark2\n";
    cin >> mark2;
    cout << "enter mark3\n";
    cin >> mark3;
}

int averageofmark(int mark1, int mark2, int mark3)
{
    int average;
    average = (mark1 + mark2 + mark3) / 3;
    return average;
}

void printaverage(int average)
{
    cout << "your result is: " << average;
}


int main()
{
    int mark1, mark2, mark3;
    readmark(mark1, mark2, mark3);
    printaverage(averageofmark(mark1,mark2,mark3));
}
    


