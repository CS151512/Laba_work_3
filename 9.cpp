#include "iostream"
#include "string"

bool ok(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    std::cin>>n;

    if (!ok(n)) {
        return;
    }

    std::string s = "";
    while (n > 0) {
        s += std::to_string(n % 10);
        n /= 10;
    }
    for (auto c : s) {
        std::cout << c<<"\n";
    }
}

int main() {
    solve();
    return 0;
}