#include <iostream>
#include <cmath>
#include <Windows.h>
int main() {
    // �������� � ������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // �������� ������� x �� y
    double x, y;
    std::cout << "������ �������� x: ";
    std::cin >> x;

    std::cout << "������ �������� y: ";
    std::cin >> y;

    // ���������� ������� �� ����� ���������
    double z1 = pow(cos(x), 2) + pow(sin(y), 2) + 0.25 * pow(sin(2 * x), 2) - 1;
    double z2 = sin(x + y) * sin(y - x);

    // ��������� ����������
    std::cout << "�� ������ �������� (z1): " << z1 << std::endl;
    std::cout << "�� ������ �������� (z2): " << z2 << std::endl;

    return 0;
}