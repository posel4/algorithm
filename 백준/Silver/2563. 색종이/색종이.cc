#include <iostream>
bool m[100][100] { false };

int main() {
    int n;
    std::cin >> n;
    while(n--) {
        int x, y;
        std::cin >> x >> y;
        for(int i = x; i < x + 10; i++) {
            for(int j = y; j < y + 10; j++) {
                m[i][j] = true;
            }
        }
    }
    int c = 0;
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            if(m[i][j]) c++;
        }
    }
    std::cout << c;
}