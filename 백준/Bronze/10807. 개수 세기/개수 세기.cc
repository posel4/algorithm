#include <iostream>
#include <map>

int main() {
    int n;
    std::cin >> n;
    std::map<int, int> m;
    for(int i = 0; i < n; i++) {
        int k;
        std::cin >> k;
        if(m.count(k)) {
            m[k]++;
        } else {
            m[k] = 1;
        }
    }
    int a;
    std::cin >> a;
    std::cout << m[a];
}