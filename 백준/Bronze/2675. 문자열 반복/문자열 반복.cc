#include <iostream>
#include <string>

int main() {
    int n, m;
    std::string s;
    std::cin >> n;
    while(n--) {
        std::cin >> m >> s;
        for(auto e : s) {
            for(int i = 0; i < m; i++)
                std::cout << e;
        }
        std::cout << "\n";
    }
}