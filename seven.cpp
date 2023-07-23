#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    cout << "Введите количество чисел: ";
    int kolvo;
    int num;
    cin >> kolvo;
    int arr[kolvo];
    cout << "Введите числа: ";
    for (int i = 0; i < kolvo; i++)
    {
        cin >> num;
        arr[i] = num;
    }
    cout << "Введите индекс минимального числа: ";
    int ind;
    int max;
    int newmin;
    cin >> ind;
    int min = arr[ind];
    for (int j = 0; j < kolvo; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
            newmin = max;
        }
    }

    for (int g = 0; g < kolvo; g++)
    {
        if (arr[g] <= newmin && arr[g] <= max && arr[g] > min )
        {
            newmin = arr[g];
            ind = g;
        }
    }
    cout << "Следующее за ним минимальное число имеет индекс" << " [" << ind << "] " << "и значение " << newmin;
}