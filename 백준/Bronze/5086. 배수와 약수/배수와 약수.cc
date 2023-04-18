#include <iostream>

int main() {
    int x, y;
    while (true) {
        std::cin >> x >> y;
        if(x == 0 && y == 0) return 0;
        if(y % x == 0) std::cout << "factor\n";
        else if(x % y == 0) std::cout << "multiple\n";
        else std::cout << "neither\n";
    }
}