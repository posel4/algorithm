#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a + b + c == 180) {
        if(a == 60 && b == 60) {
            std::cout << "Equilateral";
        }
        else if(a == b || b == c || a == c) {
            std::cout << "Isosceles";
        } else {
            std::cout << "Scalene";
        }
    } else {
        std::cout << "Error";
    }
}