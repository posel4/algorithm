#include <iostream>

int main() {
    int n, sum = 0;
    std::string s;
    std::cin >> n >> s;
    for(auto e : s) {
        sum += e - '0';
    }
    std::cout << sum;
}