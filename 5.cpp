#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double x,eps;std::cin>>x>>eps;
    double y_prev = 1.0;
    double y_current = 0.0;
    y_current = 0.5 * (y_prev + x / y_prev);

    while (std::abs(y_current - y_prev) >= eps) {
        y_prev = y_current;
        y_current = 0.5 * (y_prev + x / y_prev);
    }

    std::cout << std::fixed << std::setprecision(10);
    std::cout << y_current << "\n";

    return 0;
}