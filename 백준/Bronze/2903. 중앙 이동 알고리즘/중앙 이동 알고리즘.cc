#include <iostream>

int main() {
    int n, x = 2;
    std::cin >> n;

    while(n--) {
        x += (x - 1);
    }

    x *= x;

    std::cout << x;
}