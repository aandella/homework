#include <iostream>
int main() {
    int a, b, c = 0, d = 1;
    std::cout << "Введите число" << "\n";
    std::cin >> a;
    do 
    {
        if (a % 2 == 0) {
            b = a%10;
            a = (a-b)/10;
            c = c+(b*d);
            d = d*10;

        }
        else {
            b = a%10;
            a = (a-b)/10;
        }

    } while(a>0);
    std::cout << "Полученное число:" << c << "\n";
    return 0;
}