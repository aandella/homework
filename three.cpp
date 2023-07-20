#include <iostream>
#include <cstring>
using namespace std;

bool isvowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    cout << "Enter a char: ";
    char ch;
    cin >> ch;

    bool res = isvowel(ch);
    cout << res << endl;
}