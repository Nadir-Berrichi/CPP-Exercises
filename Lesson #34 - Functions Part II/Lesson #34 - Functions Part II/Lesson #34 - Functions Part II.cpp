#include <iostream>

using namespace std;

void mysumprocesor()

{
    int number1, number2;

    cout << "plese enter number 1?" << endl;
    cin >> number1;
    cout << "plese enter number 2?" << endl;
    cin >> number2;
    cout << "****************************\n";
    cout << number1 + number2 << endl;

}

int mysumfunction()
{
    int number1, number2;

    cout << "plese enter number 1?" << endl;
    cin >> number1;
    cout << "plese enter number 2?" << endl;
    cin >> number2;
    cout << "****************************\n";

    return number1 + number2;


}


int main()

{
    mysumprocesor();

    cout << mysumfunction() << endl;


    return 0;

}

