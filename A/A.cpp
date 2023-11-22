#include <iostream>
#include <cmath>

// ���������� ������� z1 �� z2
double z1(double x) {
    return pow(cos(x), 2) + pow(sin(x), 2) + 0.25 * pow(sin(2 * x), 2) - 1;
}

double z2(double x, double y) {
    return sin(x + y) * sin(y - x);
}

// ���������� ������� �� z1
double z1_derivative(double x) {
    return -2 * sin(x) * cos(x) + 0.5 * sin(4 * x);
}

// ��������� ������ ������� ��� ����������� ������
double newton_method(double (*func)(double), double (*derivative)(double), double initial_guess, double tolerance = 1e-6, int max_iterations = 100) {
    double x = initial_guess;

    for (int i = 0; i < max_iterations; ++i) {
        double delta_x = func(x) / derivative(x);
        x -= delta_x;

        if (std::abs(delta_x) < tolerance) {
            return x;
        }
    }

    return NAN;  // ������� NaN, ���� �� ������� ������ �����
}

int main() {
    // ����������� ������ ������� z1(x) = z2(x, y) �� ��������� ������ �������
    double x_guess = 0.0;  // ��������� ���������� ��� x
    double x_solution = newton_method([&](double x) { return z1(x) - z2(x, 0); }, z1_derivative, x_guess);

    if (!std::isnan(x_solution)) {
        double y_solution = atan2(sin(x_solution), cos(x_solution));  // ���������� y �� x_solution

        // ��������� ����������
        std::cout << "����'����: x = " << x_solution << ", y = " << y_solution << std::endl;
    }
    else {
        std::cout << "�� ������� ������ ����'����." << std::endl;
    }

    return 0;
}