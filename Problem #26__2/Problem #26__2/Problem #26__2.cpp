#include <iostream>
using namespace std;

int randomnumber(int from, int to)
{
    int randomnum;
    randomnum = rand() % (to - from + 1) + from;
    return randomnum;
}

void fillarrayelement(int arr[100], int& arrlength)
{
    cout << "enter number of element: ";
    cin >> arrlength;
    for (int i = 0; i < arrlength; i++)
    {
        arr[i] = randomnumber(1, 100);
    }
}

void printarr(int arr[100], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << " ";
    }
}

void sumofnumber(int arr[100], int arrlength)
{
    int sum = 0;
    for (int i = 0; i < arrlength; i++)
    {
        sum += arr[i];
    }
    cout << sum;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrlength;
    fillarrayelement(arr, arrlength);

    cout << "\narray element:";
    printarr(arr, arrlength);
    cout << "\n";


    cout << "\nsum of number is: ";
    sumofnumber(arr, arrlength);
    cout << "\n";

    return 0;
}