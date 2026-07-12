#include <iostream>

using namespace std;

void readgrade(float x[3])
{
    cout << "enter grade 1:\n";
    cin >> x[0];
    cout << "enter grade 2:\n";
    cin >> x[1];
    cout << "enter grade 3:\n";
    cin >> x[2];
   
}

void printgrade(float x[3])
{
    cout << "grade 1 is: " << x[0] << endl;
    cout << "grade 1 is: " << x[1] << endl;
    cout << "grade 1 is: " << x[2] << endl;

}

void average(float x[3])
{
    float average = (x[0] + x[1] + x[2]) / 3;
    cout << "average of grades is : " << average;
}

int main()
{
    float grade[3];
    readgrade(grade);
    printgrade(grade);
    average(grade);

}



