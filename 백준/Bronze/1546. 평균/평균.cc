#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, s = 0, m = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int c;
        std::cin >> c;
        s += c;
        if(m < c) m = c;
    }
    std::cout << (double)s * 100 / (n * m);
}