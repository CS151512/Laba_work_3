#include <iostream>
#include <iomanip>
#include <cmath>


void solve() {
    double a, b, c, x_start, x_end, dx;
    std::cout << "Введите a, b, c: ";
    std::cin >> a >> b >> c;
    std::cout << "Введите Xнач, Xкон, шаг dX: ";
    std::cin >> x_start >> x_end >> dx;

    if (dx <= 0) {
        std::cout << "Ошибка: шаг dX должен быть положительным!" << "\n";
        return;
    }

    std::cout << "\n" << std::string(40, '-') << "\n";
    std::cout << std::setw(15) << "x" << std::setw(15) << "F(x)" << "\n";
    std::cout << std::string(40, '-') << "\n";

    std::cout << std::fixed << std::setprecision(4);

    for (double x = x_start; x <= x_end + 1e-9; x += dx) {
        double F;

        if (x + c < 0 && fabs(a) > 1e-9) {
            F = -a * pow(x, 3) - b;
        }
        else if (x + c > 0 && fabs(a) < 1e-9) {
            F = x - a;
        }
        else {
            F = x - c;
        }

        std::cout << std::setw(15) << x << std::setw(15) << F << "\n";
    }

    std::cout << std::string(40, '-') << "\n";
}

int main() {
    solve();
    return 0;
}