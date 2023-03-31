#include <iostream>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    int l[n + 1];
    int a, b, temp, i;

    for(i = 1; i <= n; i++) {
        l[i] = i;
    }
    while(m--) {
        std::cin >> a >> b;
        std::reverse(l + a, l + 1 + b);
    }
    for(i = 1; i <=n; i++) {
        std::cout << l[i] << " ";
    }
    return 0;
}