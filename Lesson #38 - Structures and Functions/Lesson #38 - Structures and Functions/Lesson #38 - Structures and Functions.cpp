#include <iostream>
using namespace std;

struct stinfo
{
    string name;
    short age;
    string city;
    string country;
    int mounthlysalary;
    char gender;
    bool maried;
};

void readfunction(stinfo &userinfo)
{
   
    cout << "enter your name:"<<endl;
    cin >> userinfo.name;
    cout << "enter your age:" << endl;
    cin >> userinfo.age;
    cout << "enter your city:" << endl;
    cin >> userinfo.city;
    cout << "enter your country:" << endl;
    cin >> userinfo.country;
    cout << "enter your mounthly salary:" << endl;
    cin >> userinfo.mounthlysalary;
    cout << "enter your gender:" << endl;
    cin >> userinfo.gender;
    cout << "are you maried ?:" << endl;
    cin >> userinfo.maried;



}

void printfunction(stinfo userinfo)
{
    cout << "***************************************\n";
    cout << "Name:" << userinfo.name << endl;
    cout << "age:" << userinfo.age << endl;
    cout << "city:" << userinfo.city << endl;
    cout << "country:" << userinfo.country << endl;
    cout << "monthlysalry:" << userinfo.mounthlysalary << endl;
    cout << "yearly salary:" << userinfo.mounthlysalary * 12 << endl;
    cout << "gender:" << userinfo.gender << endl;
    cout << "maried:" << userinfo.maried << endl;
    cout << "***************************************\n";



}




int main()


{
    stinfo user1;
    readfunction(user1);
    printfunction(user1);

    stinfo user2;
    readfunction(user2);
    printfunction(user2);

    return 0;
}

