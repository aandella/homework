#include <iostream>
#include <cstring>
using namespace std;

string secWord(string a)
{
    string word;
    string res;
    const int SIZE = a.length();
    for (int i = 0; i < SIZE; i++)
    {
        if (a[i] != ' ')
        {
            word = word + a[i];
        }
        else
        {
            for (int j = i + 1; j < SIZE; j++)
            {
                res = res + a[j];
            }
            break;
        }
    }
    return res;
}

int main()
{
    cout << "Enter a sentense: "  ;
    string sent;
    getline(cin, sent);
    string res = secWord(sent);
    cout << res << endl;
}