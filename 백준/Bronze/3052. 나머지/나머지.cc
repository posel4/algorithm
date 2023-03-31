#include <iostream>
#include <set>


int main() {
    std::set<int> s;
    for(int i = 0; i < 10; i++) {
        int n;
        std::cin >> n;
        s.insert(n % 42);
    }
    std::cout << s.size();
}