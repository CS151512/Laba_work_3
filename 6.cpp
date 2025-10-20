#include "iostream"

void solve() {
    int counter = 1, last = 1;
    int n;std::cin >> n;
    for (int i = 0; i < n; i++) {
        if (counter > 0) {
            counter--;
        }else{
            last++;
            counter = last - 1;
        }
        std::cout << last << " ";
    }
}

int main() {
    solve();
    return 0;
}