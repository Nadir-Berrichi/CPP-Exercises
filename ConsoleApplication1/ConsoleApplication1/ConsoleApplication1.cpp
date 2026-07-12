#include <iostream>


using namespace std;


int main()
{
    string name;
    short age;
    string city;
    string country;
    float mounthlysalary;
    char gendre ;
    bool maried;


    cout << "enter you name" << endl;
    cin >> name;
    cout << "enter your age" << endl;
    cin >> age;
    cout << "enter your city" << endl;
    cin >> city;
    cout << "enter your country" << endl;
    cin >> country;
    cout << "enter your mounthly slary" << endl;
    cin >> mounthlysalary;
    cout << "enter your gendre M/F" << endl;
    cin >> gendre;
    cout << "are you maried? entre 0/1" << endl;
    cin >> maried;


    cout << "*************************************\n";
    cout << "name: " << name<< endl;
    cout << "age: " << age << endl;
    cout << "city: " << city << endl;
    cout << "country: " << country << endl;
    cout << "mounthly salry: " << mounthlysalary << endl;
    cout << "yearly salary: " << mounthlysalary * 12 << endl;
    cout << "gendre: " << gendre << endl;
    cout << "maried: " << maried << endl;
    cout << "*************************************\n";


        return 0;


}


