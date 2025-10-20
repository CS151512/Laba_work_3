#include <iostream>
#include <cmath>
#include <iomanip>

long long factorial(int n) {
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    return ans;
}

double cos_taylor(double x, int terms) {
    double result = 0.0;

    for (int n = 0; n < terms; n++) {
        double term = std::pow(-1, n) * std::pow(x, 2 * n) / factorial(2 * n);
        result += term;
    }

    return result;
}

void solve() {
    double x;
    int n;

    std::cin >> x >> n;

    double my_cos = cos_taylor(x, n);
    double std_cos = std::cos(x);

    std::cout << std::fixed << std::setprecision(6);
    std::cout << my_cos << std::endl;
    std::cout << std_cos << std::endl;
}

int main() {
    solve();
    return 0;
}