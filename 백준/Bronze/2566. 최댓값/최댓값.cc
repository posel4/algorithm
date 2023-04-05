#include <iostream>

int main() {
    int n = 0, m = 0, max = 0;
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            int c;
            std::cin >> c;
            if(c > max) {
                n = i;
                m = j;
                max = c;
            }
        }
    }
    std::cout << max << "\n";
    std::cout << n + 1 << " " << m + 1;
}