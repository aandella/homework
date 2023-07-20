#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string sent;
    string result;
    cout << "Введите строку: " ;
    getline(cin, sent);
    string word;
    int SIZE = size(sent);
    for (int i = 0; i < SIZE; i++)

    {

        if (sent[i] != ' ')
        {
            word = word + sent[i];
        }
        else
        {
            int length = word.length();
            for (int j = 0; j < length / 2; j++)
            {
                char a = word[j];
                word[j] = word[length - j - 1];
                word[length - j - 1] = a;
            }
            result = result + word + " ";
            word = "";
        }
    }
    int length = word.length();

    for (int j = 0; j < length / 2; j++)
    {
        char a = word[j];
        word[j] = word[length - j - 1];
        word[length - j - 1] = a;
    }

    result = result + word;

    cout << "Результат: " << result << endl;
}