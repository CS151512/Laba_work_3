#include "iostream"

void solve() {
    int l,r;
    int n;
    std::cin>>l>>r;
    do {
        std::cin>>n;
    }while (n < l || n > r);
}

int main() {
    solve();
    return 0;
}