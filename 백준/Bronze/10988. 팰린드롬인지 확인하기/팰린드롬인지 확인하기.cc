#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int i = s.length() / 2;
    std::string s2 = s.substr(i + s.length() % 2, s.length());
    reverse(s2.begin(), s2.end());
    std::cout << (int)(s.substr(0, i) == s2);
}
