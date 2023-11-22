#include <iostream>
#include <cmath>
#include <Windows.h>
int main() {
    // �������� � ������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // �������� ������� x �� y � ���������
    double x, y;
    std::cout << "������ �������� ������ x �� y: ";
    std::cin >> x >> y;


    // ���������� ���������� ������
    double numerator1 = x + 2;
    double denominator1 = 3 * y + 1;
    double component1 = std::sqrt(std::sqrt(numerator1 / denominator1));

    double numerator2 = 8 * std::pow(x, 2) + 3;
    double denominator2 = 1 - 9 * std::pow(y, 2);
    double component2 = numerator2 / denominator2;

    // ���������� �������� ������
    double result = std::sqrt(component1 + component2);

    // ��������� ����������
    std::cout << "�������� ������: " << result << std::endl;

    return 0;
}