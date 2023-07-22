#include <iostream>
#include <cstring>
using namespace std;



int raz = 8;
char *word = new char[raz];
int glas;

int rankWord(const char *inputWord)
{
    int SIZE = strlen(inputWord);
    for (int i = 0; i < SIZE; i++)
    {
        if (inputWord[i] != ' ')
        {
            word[i] = inputWord[i];
        }
        else
        {
            break;
        }
    }
    SIZE = strlen(word);
    for (int j = 0; j < SIZE; j++)
    {
        if (word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || word[j] == 'o' || word[j] == 'u' || word[j] == 'A' || word[j] == 'E' || word[j] == 'I' || word[j] == 'O' || word[j] == 'U')
        {
            glas++;
        }
    }
    return (glas);
}

int main()
{
    cout << "Enter a sentense: ";
    string input;
    getline(cin, input);
    int res = rankWord(input.c_str());
    cout << res << endl;
    delete[] word;

}
