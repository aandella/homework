#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string word;
    string sent;
    cout << "Enter the sentense: ";
    getline(cin, sent);
    const int SIZE = size(sent);
    for (int i = 0; i < SIZE; i++)
    {
        if (sent[i] != ' ')
        {
            word = word + sent[i];
        }
        else
        {
            cout << word << 'A' << '\n';
            word = "";
        }
    }

    cout << word << 'A' << '\n';
    word = "" ;
}