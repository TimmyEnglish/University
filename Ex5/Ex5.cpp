#include <iostream>
#include <cmath>
#include <Windows.h>
int main() {
    //  ирилиц€ у консол≥
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // ¬веденн€ значень x та y з клав≥атури
    double x, y;
    std::cout << "¬вед≥ть значенн€ зм≥нних x та y: ";
    std::cin >> x >> y;


    // ќбчисленн€ компонент≥в виразу
    double numerator1 = x + 2;
    double denominator1 = 3 * y + 1;
    double component1 = std::sqrt(std::sqrt(numerator1 / denominator1));

    double numerator2 = 8 * std::pow(x, 2) + 3;
    double denominator2 = 1 - 9 * std::pow(y, 2);
    double component2 = numerator2 / denominator2;

    // ќбчисленн€ значенн€ виразу
    double result = std::sqrt(component1 + component2);

    // ¬иведенн€ результату
    std::cout << "«наченн€ виразу: " << result << std::endl;

    return 0;
}