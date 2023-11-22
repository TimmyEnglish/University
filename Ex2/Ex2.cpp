#include <iostream>
#include <cmath>
#include <Windows.h>
struct Point {
    double x, y;
};

// Функція для обчислення середньої точки між двома точками
Point midpoint(const Point& p1, const Point& p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2.0;
    mid.y = (p1.y + p2.y) / 2.0;
    return mid;
}

// Функція для обчислення відстані між двома точками
double distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Функція для обчислення медіани трикутника
void calculateMedian(const Point& A, const Point& B, const Point& C) {
    Point medianAB = midpoint(A, B);
    Point medianBC = midpoint(B, C);
    Point medianCA = midpoint(C, A);

    std::cout << "Медіана трикутника:\n";
    std::cout << "Медіана з A до B: (" << medianAB.x << ", " << medianAB.y << ")\n";
}

// Функція для обчислення бісектрис трикутника
void calculateBisectors(const Point& A, const Point& B, const Point& C) {
    double sideAB = distance(A, B);
    double sideBC = distance(B, C);
    double sideCA = distance(C, A);

    // Обчислення бісектрис за формулою
    Point bisectorA = {
        (sideBC * A.x + sideCA * B.x) / (sideBC + sideCA),
        (sideBC * A.y + sideCA * B.y) / (sideBC + sideCA)
    };

    Point bisectorB = {
        (sideCA * B.x + sideAB * C.x) / (sideCA + sideAB),
        (sideCA * B.y + sideAB * C.y) / (sideCA + sideAB)
    };

    Point bisectorC = {
        (sideAB * C.x + sideBC * A.x) / (sideAB + sideBC),
        (sideAB * C.y + sideBC * A.y) / (sideAB + sideBC)
    }
    ; std::cout << "Бісектриса трикутника:\n";
    ; std::cout << "Бісектриса в точці C: (" << bisectorC.x << ", " << bisectorC.y << ")\n";
}

int main() {
        // Кирилиця у консолі
        SetConsoleOutputCP(1251);
        SetConsoleCP(1251);
    Point A = { 0, 0 };
    Point B = { 23, 22 };
    Point C = { -22, 24 };

    calculateMedian(A, B, C);
    std::cout << "\n";
    calculateBisectors(A, B, C);

    return 0;
}