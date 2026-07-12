#include <iostream>
#include <string>
using namespace std;

string readtext(string message)
{
    cout << message << endl;
    string text;
   getline(cin,text);

    return text;
}

string creaptedtext(string text,short key)
{
    for (int i = 0; i <= text.length(); i++)
    {
        text[i] = char((int)text[i] + key);
   }
    return text;
}

string dcreaptedtext(string text, short key)
{
    for (int i = 0; i <= text.length(); i++)
    {
        text[i] = char((int)text[i] - key);
    }
    return text;
}

int main()
{
    string text = readtext("enter a text");
    short key = 2;
    cout << text << endl;
    cout << creaptedtext(text,key) << endl;
    cout << dcreaptedtext(creaptedtext(text,key), key) << endl;
   
}


