#include <iostream>
#include <cstring>
using namespace std;

int main() {

cout << "Enter a sentense: ";
string sent;
string a;
getline(cin, sent);
const int SIZE = size(sent);
for (int i = 0; i < SIZE/2; i++) {
    a[i] = sent[i];
    sent[i] = sent[SIZE - i - 1];
    sent[SIZE-i - 1] = a[i];
}
cout << sent << endl;

}