#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::cin >> n;

    std::vector<int> v;

    for(int i = 0; i < n; i++) {
        int c;
        std::cin >> c;
        v.push_back(c);
    }

    std::sort(v.begin(), v.end());
    std::cout << v[0] << " " << v[n - 1]; 
}