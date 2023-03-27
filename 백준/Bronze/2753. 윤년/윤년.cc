#include <iostream>

int main() {
    int y;
    std::cin >> y;
    int ans = ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0);
    std::cout << ans;
}