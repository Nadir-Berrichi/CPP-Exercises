#include <iostream>
using namespace std;
struct stfullname
{
    string firstname;
    string lastname;
};

stfullname readname()
{
    stfullname nameinfo;
    cout << "enter your first name\n";
    cin >> nameinfo.firstname;
    cout << "enter your last name\n";
    cin >> nameinfo.lastname;

    return nameinfo;
}

void printfullname(stfullname nameinfo)
{
    cout << nameinfo.firstname << " " << nameinfo.lastname << endl;
}

int main()
{
    printfullname(readname());
}


