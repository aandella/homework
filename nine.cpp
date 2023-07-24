#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string sent;
    string word;
    string res;
    getline(cin, sent);
    int SIZE = size(sent);
    for (int i = 0; i < SIZE; i++ ) {
        if (sent[i] != ' ') {
            word += sent[i];

        }
        else {
            if (size(word)%2 != 0) {
                word = word + "NO";
                res = res + ' ' + word;
                word = "";

            }
            else {
                res = res + ' ' + word;
                word = "";
            }
        }
        
    }
    if (size(word)%2 != 0) {
                word = word + "NO";
                res = res + ' ' + word;
                word = "";

            }
            else {
                res = res + ' ' + word;
                word = "";
            }
    cout << res << endl;
}