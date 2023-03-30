#include <iostream>

int main() {
    bool s[31] = { false };
    for(int i = 0; i < 28; i++) {
        int n;
        std::cin >> n;
        s[n] = true;
    }
    bool f = false;
    for(int i = 1; i <= 30; i++) {
        if(!s[i]) {
            std::cout << i;
            if(!f)
                std::cout << "\n";
            f = true;
        } 
    }
}