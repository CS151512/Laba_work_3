#include "iostream"

int gcd (int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        }else {
            b -= a;
        }
    }
    return a;
}

void solve() {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd (a, b) << "\n";
}

int main() {
    solve();
    return 0;
}