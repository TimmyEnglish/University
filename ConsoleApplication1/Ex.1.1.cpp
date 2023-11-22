#include <iostream>
#include <Windows.h>
int main() {
    // Кирилиця у консолі
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Введення кількості прийомів їжі на добу та їх тривалості
    int mealsPerDay;
    double mealDuration;

    std::cout << "Введіть кількість прийомів їжі на добу: ";
    std::cin >> mealsPerDay;

    std::cout << "Введіть тривалість одного прийому їжі (у годинах): ";
    std::cin >> mealDuration;

    // Розрахунок загального часу на прийом їжі за все життя (75 років)
    int averageLifespan = 75; // середній вік людини
    int daysInYear = 365; // кількість днів у році

    double totalTimeSpentEating = mealsPerDay * mealDuration * daysInYear * averageLifespan;

    std::cout << "Загальний час, витрачений на прийом їжі за все життя, складає "
        << totalTimeSpentEating << " годин.\n";

    return 0;
}
