#include <iostream>

int main() {
    int x, y, w, h;
    std::cin >> x >> y >> w >> h;
    std::cout << std::min(std::min(x, std::abs(w - x)), std::min(y, std::abs(h - y)));
}