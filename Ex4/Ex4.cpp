#include <iostream>
#include <cmath>
#include <Windows.h>
int main() {
    // �������� � ������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // ������� ��������� a
    const double a = -0.9;

    // �������� �������� x � ���������
    double x;
    std::cout << "������ �������� x: ";
    std::cin >> x;

    // ���������� ������� v �� w
    double v = pow(cos(a), 2);
    double w = sqrt(a + std::abs(x));

    // ���������� �������� ������� y
    double y = pow(v, 3) + pow(cos(w), 2);

    // ��������� ����������
    std::cout << "�������� ������� y ��� x = " << x << " : " << y << std::endl;

    return 0;
}