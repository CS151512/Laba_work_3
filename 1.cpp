#include "iostream"

void solve() {
    int n;std::cin>>n;
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += 1/(i *(i+1));
    }
    std::cout<<ans<<"\n";
}

int main() {
    solve();
    return 0;
}