#include <iostream>
#include <cmath>

int main()
{
    std::string s;
    int n;
    std::cin >> s >> n;

    int sum(0);
    for (int i = 0; i < s.length(); i++) {
        int t = s[s.length() - (i + 1)];
        if ('0' <= t && t <= '9') {
            t = t - '0';
        }
        else {
            t = t + 10 - 'A';
        }
        sum += (t * (int)pow(n, i));
    }
    std::cout << sum;

    return 0;
}