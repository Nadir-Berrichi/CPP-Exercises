#include <iostream>
using namespace std;

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

void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = i + 1;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

void arraftershuffle(int arr[100], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
        cout << arr[RandomNumber(0,arrlength)] << " ";

    cout << "\n";
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrlength = ReadPositiveNumber("enter number of element: \n");

    FillArrayWithRandomNumbers(arr, arrlength);
    cout << "arr before shufle\n";
    PrintArray(arr, arrlength);

    cout << "arr after shufle\n";
    arraftershuffle(arr, arrlength);
}

