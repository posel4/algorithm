#include <iostream>

int main() {
    int h, m;
    std::cin >> h >> m;

    if(m - 45 < 0) {
        if(--h < 0)
            h += 24;
        std::cout << h << " " << m + 15;
    } else {
        std::cout << h << " " << m - 45;
    }
}