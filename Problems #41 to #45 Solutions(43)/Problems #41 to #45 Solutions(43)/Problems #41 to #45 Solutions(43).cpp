#include <iostream>
using namespace std;

struct STallduration
{
    int days, hours, minutes, seconds;
};

int ReadPositiveNumber(string Message)
{
   int  Number = 0;

    
    do
    {
        cout << Message << endl;  
        cin >> Number;  
    } while (Number < 0);  

    return Number;  
}

STallduration seconds_to_allduration(int seconds)

{
    STallduration duration;
   int remainder;

   const int secondperday = 24 * 60 * 60;
   const int secondperhour =  60 * 60;
   const int secondperminute = 60;

   duration.days =floor( seconds / secondperday);
   remainder = seconds % secondperday;
   duration.hours = floor(remainder / secondperhour);
   remainder = remainder % secondperhour;
   duration.minutes = floor(remainder / secondperminute);
   remainder = remainder % secondperminute;
   duration.seconds = remainder;


    
   

    
    return duration;

}

void printresult(STallduration duration)
{
    cout << "\n";  

   
    cout << duration.days << ":"
    << duration.hours << ":"
    << duration.minutes << ":"
        << duration.seconds << "\n";

}




int main()
{
    printresult(seconds_to_allduration(ReadPositiveNumber("enter number of seconds")));
}

