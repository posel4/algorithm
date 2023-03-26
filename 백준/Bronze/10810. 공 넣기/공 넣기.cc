#include <iostream>
#define MAX 100

int main() {
    int arr[MAX] = { 0 };
    int m, n;
    std::cin >> m >> n;
    for(int i = 0; i < n; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;
        for(int j = a; j < b + 1; j++) {
            arr[j - 1] = c;
        }
    }
    for(int i = 0; i < m; i++) {
        std::cout << arr[i] << " ";
    }
}