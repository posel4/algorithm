#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    while(n--) {
        std::string s;
        std::cin >> s;
        std::cout << s[0] << s[s.length() - 1] << "\n";
    }
}