

#include <iostream>
using namespace std;
int main()

{
    float grade[3];
    cout << "enter grade 1:" << endl;
    cin >> grade[0];
    cout << "enter grade 2:" << endl;
    cin >> grade[1];
    cout << "enter grade 3:" << endl;
    cin >> grade[2];

    cout << "the average of grades is :" << (grade[0] + grade[1] + grade[2]) / 3;

    return 0;
}


