#include <iostream>
#include <Windows.h>
int main() {
    // Кирилиця у консолі
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Введення кількості годин на день, витрачених на паління
    double hoursPerDay;
    std::cout << "Введіть кількість годин на день, витрачених на паління: ";
    std::cin >> hoursPerDay;

    // Введення віку людини та віку, з якого вона почала палити
    int currentAge, smokingStartAge;
    std::cout << "Введіть поточний вік людини: ";
    std::cin >> currentAge;

    std::cout << "Введіть вік, з якого людина почала палити: ";
    std::cin >> smokingStartAge;

    // Розрахунок загального часу, витраченого на паління, враховуючи вік початку
    int daysInYear = 365; // кількість днів у році
    double totalSmokingTime = hoursPerDay * daysInYear * (currentAge - smokingStartAge);

    // Виведення результату
    std::cout << "Загальний час, витрачений на паління з віку " << smokingStartAge
        << " до віку " << currentAge << " років, складає "
        << totalSmokingTime << " годин (або " << totalSmokingTime / 24.0 / 365.0 << " років).\n";

    return 0;