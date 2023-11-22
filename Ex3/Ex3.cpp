#include <iostream>
#include <cmath>
#include <Windows.h>
int main() {
    // Кирилиця у консолі
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Введення значень x та y
    double x, y;
    std::cout << "Введіть значення x: ";
    std::cin >> x;

    std::cout << "Введіть значення y: ";
    std::cin >> y;

    // Обчислення значень за обома формулами
    double z1 = pow(cos(x), 2) + pow(sin(y), 2) + 0.25 * pow(sin(2 * x), 2) - 1;
    double z2 = sin(x + y) * sin(y - x);

    // Виведення результатів
    std::cout << "За першою формулою (z1): " << z1 << std::endl;
    std::cout << "За другою формулою (z2): " << z2 << std::endl;

    return 0;
}