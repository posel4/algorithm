#include <iostream>
#include <algorithm>

int main() {
    std::string n, m;
    std::cin >> n >> m;
    std::reverse(n.begin(), n.end());
    std::reverse(m.begin(), m.end());
    std::cout << std::max(n, m);
}