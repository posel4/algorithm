#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    for(char i = 'a'; i <= 'z'; i++) {
        auto e = s.find(i);
        if(e != std::string::npos)
            std::cout << e << " ";
        else
            std::cout << -1 << " ";
    }
}