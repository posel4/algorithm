#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a == b) {
        if(b == c) {
            std::cout << 10000 + a * 1000;
        }
        else {
            std::cout << 1000 + a * 100;
        }
    } else {
        if(b == c) {
            std::cout << 1000 + b * 100;
        } else if (a == c) {
            std::cout << 1000 + a * 100;
        } else {
            std::cout << std::max(std::max(a, b), c) * 100;
        }
    }
}