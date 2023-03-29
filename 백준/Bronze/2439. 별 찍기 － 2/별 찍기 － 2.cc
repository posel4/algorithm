#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n - i; j++) {
            std::cout << " ";
        }
        for(int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}