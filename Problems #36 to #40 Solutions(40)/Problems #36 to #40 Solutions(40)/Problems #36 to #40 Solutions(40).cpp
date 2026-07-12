#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number = 0;  

    
    do
    {
        cout << Message << endl;  
        cin >> Number;  
    } while (Number <= 0);  

    return Number; 
}

float calculate_resturant_charge(float billvalue)
{
    float charge=0;
    return charge = billvalue * 1.1;
}

float calculate_total_bill(float charge)
{
    float total=0;
    return total = charge * 1.16;
}
void printtotalbill(float total)
{
    cout << "the total bill is: \n" << total;
}



int main()
{
   float billvalue = ReadPositiveNumber("enter bill value:");

   printtotalbill( calculate_total_bill(calculate_resturant_charge(billvalue)));

}


