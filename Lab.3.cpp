#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    int sum = 0;

    cout << "Введіть числа :" << endl;

    do {
        cin >> number;
        sum += number;
    } while (number != 0);

    cout << "Сума введених чисел: " << sum << endl;

    return 0;
}
