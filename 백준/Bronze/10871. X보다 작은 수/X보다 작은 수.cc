#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m;
    std::cin >> n >> m;
    for(int i = 0; i < n; i++) {
        int c;
        std::cin >> c;
        if(c < m) {
            std::cout << c << " ";
        }
    }
}