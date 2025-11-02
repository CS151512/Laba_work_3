#include "iostream"

void solve() {
    int n;std::cin>>n;
    double ans = 0.0;
    for (int i = 1; i <= n; i++) {
        ans += 1.0 /(i * (i + 1));
    }
    std::cout<<ans<<"\n";
}

int main() {
    solve();
    return 0;
}