#include <iostream>
#include <cmath>

bool checkDecimal(int n) {
    if(n == 1) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int x, y, m = -1, s = 0;
    std::cin >> x >> y;
    for(int i = x; i <= y; i++) {
        if(checkDecimal(i)) {
            if(m == -1) m = i;
            s += i;
        }
    }
    if(s == 0) std::cout << -1;
    else std::cout << s << "\n" << m;
}