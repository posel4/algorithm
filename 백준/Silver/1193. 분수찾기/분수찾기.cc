#include <iostream>

int main() {
    int x, c = 0, s = 0;
    std::cin >> x;
    s = x;
    while(s > 0) {
        s -= c++;
    }
    s += c - 1;
    if(c % 2 == 0)
        std::cout << c - s << "/" << s;
    else
        std::cout << s << "/" << c - s;
}