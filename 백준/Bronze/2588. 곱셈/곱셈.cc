#include <iostream>

int main() {
    int n, m;
    int sum = 0;
    int flag = 1;
    std::cin >> n >> m;
    while(m) {
        int num = n * (m % 10);
        std::cout << num << std::endl;
        sum += num * flag;
        flag *= 10;
        m /= 10;
    }
    std::cout << sum;
}