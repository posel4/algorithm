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
    int n, c = 0;
    std::cin >> n;
    while (n--)
    {
        int m;
        std::cin >> m;
        if(checkDecimal(m)) c++;
    }
    std::cout << c;
}