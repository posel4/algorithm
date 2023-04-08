#include <iostream>
#include <stack>

char toChar(int i) {
    if(i < 10) return i + '0';
    else return 'A' + i - 10;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::stack<int> s;
    while (n >= m) {
        s.push(n % m);
        n /= m;
    }
    std::cout << toChar(n);
    while(!s.empty()) {
       std::cout <<toChar(s.top());
        s.pop();
    }
    return 0;
}
