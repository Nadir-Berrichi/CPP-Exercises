#include <iostream>
using namespace std;


string readword()
{
    string word;
    cout << "enter a password:\n";
    cin >> word;
    return word;
}

void PrintAllFromAAAtoZZZ(string password)
{
    cout << "\n";  
    string word = ""; 
    int counter = 0;

   
    for (int i = 65; i <= 90; i++)
    {
        
        
        for (int j = 65; j <= 90; j++)
        {
            
            for (int k = 65; k <= 90; k++)
            {
                counter += 1;

                word.append(1, char(i));
                
                word.append(1, char(j));
                
                word.append(1, char(k));

                cout << "Trial " << "[" << counter << "]" << " : " << word << endl;

                if (word == password)
                {
                    cout<<"\npassword is:" << word << endl;
                    cout << "found after " << counter << " trial(s)\n";

                    return;
                }
               
                word = "";
            }
        }
        
        
    }
}

int main()
{
    PrintAllFromAAAtoZZZ(readword());
}


