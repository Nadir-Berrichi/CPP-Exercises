#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
    
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void printarr(int arr[100], int &arrlength)
{
     arrlength = ReadPositiveNumber("enter number of element do you want from 1 to 100:\n");

    cout << "array element is: ";
    for (int i = 0; i < arrlength; i++)
    {
        arr[i] = RandomNumber(1, 100);
        cout << arr[i] << " ";

    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrlength;

    printarr(arr, arrlength);
}


