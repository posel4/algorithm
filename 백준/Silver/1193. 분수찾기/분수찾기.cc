#include <iostream>

int main() {
    int x, c = 1, s = 1;
    std::cin >> x;
    if(x == 1) {
        std::cout << "1/1";
        return 0;
    }

    while(++c) {
        if(s + c + 1 > x)
            break;
        else
            s += c;
    }
    int d = x - 1 - s;
    if(c % 2 == 0)
        std::cout << 1 + d << "/" << c - d;
    else
        std::cout << c - d << "/" << 1 + d;
}