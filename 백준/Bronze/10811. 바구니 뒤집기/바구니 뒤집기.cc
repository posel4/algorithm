#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    int l[n + 1];
    for(int i = 1; i <= n; i++) {
        l[i] = i;
    }
    int a, b;
    while(m--) {
        std::cin >> a >> b;
        for (int i = a; i <= (a + b) / 2; i++)
        {
            int temp = l[i];
            l[i] = l[a + b - i];
            l[a + b - i] = temp;
        }
    }
    for(int i = 1; i <=n; i++) {
        std::cout << l[i] << " ";
    }
    return 0;
}