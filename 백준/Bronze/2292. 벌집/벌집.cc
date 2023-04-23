#include <iostream>

int main() {
    int n, i = 0;
    std::cin >> n;
    for(int s = 2; s <= n; i++)
        s += 6 * i;
    if(n == 1) i = 1;
    std::cout << i;
    return 0;
}