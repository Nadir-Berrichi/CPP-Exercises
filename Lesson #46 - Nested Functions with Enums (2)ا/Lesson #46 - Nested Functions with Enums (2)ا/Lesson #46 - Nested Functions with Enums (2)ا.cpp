#include <iostream>
using namespace std;

enum enGrade{ Excellent=1, VeryGood, Good, Pass, Fail};

void ShowGradeMenu()
{
    cout << "**************************\n";
    cout << "*         grade          *\n";
    cout << "**************************\n";
    cout << "*(1) Excellent          *\n";
    cout << "*(2) Very Good           *\n";
    cout << "*(3) Good                *\n";
    cout << "*(4) Pass                *\n";
    cout << "*(5) Fail                *\n";
    cout << "**************************\n";
    cout << "choose a grade\n";
}

enGrade ReadGrade()
{
    int g;
   cin >> g;
   return (enGrade)g;

}

string GetGradeName(enGrade g)
{
    switch(g){
    case enGrade::Excellent:
        return"Excellent";
            break;
    case enGrade::VeryGood:
        return"VeryGood";
        break;
    case enGrade::Good:
        return"Good";
        break;
    case enGrade::Pass:
        return"Pass";
        break;
    case enGrade::Fail:
        return"Fail";
        break;
    default:
        return "Invalid Grade";
    }
        
}


int main()
{
    ShowGradeMenu();
    cout << "Your grade is: " << GetGradeName(ReadGrade());

    return 0;
    
}

