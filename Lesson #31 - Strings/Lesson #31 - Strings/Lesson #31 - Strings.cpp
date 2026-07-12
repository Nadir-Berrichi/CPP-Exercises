

#include <iostream>
#include <string>
using namespace std;



int main()

{
    string s1, s2, s3;
    cout << "please enter s1"<<endl;
    getline(cin, s1);
    cout << s1<<endl;
    
    cout << "please enter s2"<<endl;
    cin >> s2;
    cout << s2<<endl;

    cout << "please enter s3"<<endl;
    cin >> s3;
    cout << s3<<endl;

    cout << "*************************************************" << endl;

    cout << "the length of s1 is :" << s1.length() << endl;
    cout << s1[0]  << s1[2]  << s1[4]  << s1[7] << endl;

    string sum1;
    sum1 = s2 + s3;
    cout << sum1 << endl;
    int sum2;
    cout  <<stoi(s2) * stoi(s3) ;
    
   
    


    





   





    
}

