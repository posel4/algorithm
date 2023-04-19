#include <iostream>

int main() {
    int n, k, c = 0;
    std::cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) c++;
        if(c == k) {
            std::cout << i;
            return 0;
        }
    }
    std::cout << 0;
    return 0;
}