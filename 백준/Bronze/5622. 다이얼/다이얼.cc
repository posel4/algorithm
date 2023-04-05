
#include <iostream>
#include <string>

int getNum(char c) {
    if(c < 'P') {
        return (c - 'A') / 3 + 2;
    } else if(c == 'P') {
        return 7;
    } else if(c == 'Z') {
        return 9;
    } else {
        return (c - 'A' - 1) / 3 + 2;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string s;
    std::cin >> s;
    int t = 0;
    for(auto e : s) {
        t += getNum(e) + 1;
    }
    std::cout << t;
}