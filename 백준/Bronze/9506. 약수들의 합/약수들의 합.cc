#include <iostream>
#include <cmath>
#include <vector>

int main() {
    int n;
    while(true) {
        std::cin >> n;
        if(n == -1) return 0;
        int s = 1; 
        std::vector<int> v = { 1 };
        for(int i = 2; i < n; i++) {
            if(n % i == 0) {
                v.push_back(i);
                s += i;
            }
        }
        if(s != n) {
            std::cout << n << " is NOT perfect.\n";
        } else if (s == n) {
            std::cout << n << " = ";
            int l = v.size();
            for(int i = 0; i < l - 1; i++) {
                std::cout << v[i] << " + ";
            }
            std::cout << v[l - 1] << "\n";
        }
    }
}