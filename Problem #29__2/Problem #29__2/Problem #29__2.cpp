#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

enPrimNotPrime CheckPrime(int Number)
{
    if (Number < 2)
        return enPrimNotPrime::NotPrime;

    int M = Number / 2;

    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimNotPrime::NotPrime;
    }

    return enPrimNotPrime::Prime;
}

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillArray(int arr[100], int& arrLength)
{
    cout << "Enter number of elements: ";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void CopyOnlyPrimaryNumbers(int arrSource[100], int arrDestination[100],
    int arrLength, int& arr2Length)
{
    int Counter = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
        {
            arrDestination[Counter] = arrSource[i];
            Counter++;
        }
    }

    arr2Length = Counter;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;
    int arr2[100], arr2Length = 0;

    FillArray(arr, arrLength);

    CopyOnlyPrimaryNumbers(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nPrime Numbers in Array 2:\n";
    PrintArray(arr2, arr2Length);

    return 0;
}

