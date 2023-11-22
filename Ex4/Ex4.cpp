#include <iostream>
#include <cmath>
#include <Windows.h>
int main() {
    // Кирилиця у консолі
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Задання константи a
    const double a = -0.9;

    // Введення значення x з клавіатури
    double x;
    std::cout << "Введіть значення x: ";
    std::cin >> x;

    // Обчислення значень v та w
    double v = pow(cos(a), 2);
    double w = sqrt(a + std::abs(x));

    // Обчислення значення функції y
    double y = pow(v, 3) + pow(cos(w), 2);

    // Виведення результату
    std::cout << "Значення функції y для x = " << x << " : " << y << std::endl;

    return 0;
}