#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    
    arrLength++;
    
    arr[arrLength - 1] = Number;
}


void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arr2[100], arrlength, arrlength2=0;

    FillArrayWithRandomNumbers(arr, arrlength);
    cout << "array element 1:\n";
    PrintArray(arr, arrlength);

    do {
        AddArrayElement(arr[arrlength2], arr2, arrlength2);
    } while (arrlength != arrlength2);
    cout << "array 2 element after copy :\n";
    PrintArray(arr2, arrlength2);

}

