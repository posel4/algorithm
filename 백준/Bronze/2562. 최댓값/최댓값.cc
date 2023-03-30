#include <iostream>
#include <map>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::map<int, int> m;

    for(int i = 0; i < 9; i++) {
        int n;
        std::cin >> n;
        m.insert({n, i + 1});
    }

    auto e = m.rbegin();
    std::cout << e->first << "\n" << e->second;
}