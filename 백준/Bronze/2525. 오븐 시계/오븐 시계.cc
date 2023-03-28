#include <iostream>

int main() {
    int h, m, d;
    std::cin >> h >> m >> d;

    if(m + d > 59) {
        std::cout << (h + (m + d) / 60) % 24 << " " << (m + d) % 60;
    } else {
        std::cout << h << " " << m + d;
    }
}