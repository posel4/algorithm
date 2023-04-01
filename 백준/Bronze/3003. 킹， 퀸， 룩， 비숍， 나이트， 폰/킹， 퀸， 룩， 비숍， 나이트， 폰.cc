#include <iostream>

int main() {
    int d[6] = {1, 1, 2, 2, 2, 8};
    for(int i = 0; i < 6; i++) {
        int n;
        std::cin >> n;
        std::cout << d[i] - n << " ";
    }
}