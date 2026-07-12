#include <iostream>
#include<string>
using namespace std;

int main()
{
    string st1;
    st1 = "43.22";

    double num_double = stod(st1);
    cout << num_double << endl;

    float num_float = stof(st1);
    cout << num_float << endl;

    int num_int = stoi(st1);
    cout << num_int << endl;

    int n1;
    n1 = 20;
    string st2 = to_string(n1);
    cout << st2 << endl;
    

    double n2;
    n2 = 33.5;
    string st3 = to_string(n2);
    cout << st3 << endl;

    float n3;
    n3 = 55.23;
    string st4 = to_string(n3);
    cout << st4 << endl;

    int num_int2 = int(n3);
    cout << num_int2 << endl;


    return 0;
}

