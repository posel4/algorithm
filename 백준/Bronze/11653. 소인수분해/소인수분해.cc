#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    int l = n;
    for(int i = 2; i <= l; i++) {
        if(n == 1) {
            break;
        }
        while(n % i == 0) {
            std::cout << i << "\n";
            n /= i;
        }
    }
}