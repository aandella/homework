#include <iostream>
int main() {
    int a, b, nod;
    std::cout << "Введите 2 числа" << "\n";
    std::cin >> a >> b;
    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }

    }
    nod = a;
    std::cout << "НОД = " << nod << "\n";
    return 0;
}