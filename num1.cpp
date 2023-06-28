#include <iostream>

int main() {

int a, c = 1, b;
std::cout << "Введите число " << "\n";
std::cin >> a;
do {

b = a%10;
a = (a-b)/10;
c = c*b;

} while(a>0);

std::cout << "Произведение цифр = " << c << "\n";

return 0;
}