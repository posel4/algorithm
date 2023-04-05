#include <iostream>
#define MAX 100
int h[MAX][MAX] = {0};

void print(int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            std::cout << h[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    int n, m, t = 2;
    std::cin >> n >> m;
    while(t--) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int c;
                std::cin >> c;
                h[i][j] += c;
            }
        }
    }
    print(n, m);
}