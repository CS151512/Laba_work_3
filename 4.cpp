#include "iostream"

int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
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