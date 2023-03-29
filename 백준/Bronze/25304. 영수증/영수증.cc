#include <iostream>

int main() {
    int t, n, s = 0;
    std::cin >> t >> n;
    for(int i = 0; i < n; i++) {
        int p, c;
        std::cin >> p >> c;
        s += p * c;
    }
    if(t == s) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
}