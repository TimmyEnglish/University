#include <iostream>
#include <Windows.h>
int main() {
    // �������� � ������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // �������� ������� ����� �� ����, ���������� �� ������
    double hoursPerDay;
    std::cout << "������ ������� ����� �� ����, ���������� �� ������: ";
    std::cin >> hoursPerDay;

    // �������� ��� ������ �� ���, � ����� ���� ������ ������
    int currentAge, smokingStartAge;
    std::cout << "������ �������� �� ������: ";
    std::cin >> currentAge;

    std::cout << "������ ��, � ����� ������ ������ ������: ";
    std::cin >> smokingStartAge;

    // ���������� ���������� ����, ����������� �� ������, ���������� �� �������
    int daysInYear = 365; // ������� ��� � ����
    double totalSmokingTime = hoursPerDay * daysInYear * (currentAge - smokingStartAge);

    // ��������� ����������
    std::cout << "��������� ���, ���������� �� ������ � ��� " << smokingStartAge
        << " �� ��� " << currentAge << " ����, ������ "
        << totalSmokingTime << " ����� (��� " << totalSmokingTime / 24.0 / 365.0 << " ����).\n";

    return 0;