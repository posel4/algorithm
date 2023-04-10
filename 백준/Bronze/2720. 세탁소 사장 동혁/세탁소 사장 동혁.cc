#include <iostream>

void getCoin(int n) {
    int q, d, ni;
    q = n / 25;
    n %= 25;
    d = n / 10;
    n %= 10;
    ni = n / 5;
    n %= 5;
    std::cout << q << " " << d << " " << ni << " " << n << "\n";
}

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        getCoin(n);
    }
}