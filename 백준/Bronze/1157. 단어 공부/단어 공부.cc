#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <cctype>

bool cmp(std::pair<char, int>& a, std::pair<char, int>& b) {
    return a.second > b.second;
}

int main() {
    std::string s;
    std::cin >> s;
    std::unordered_map<char, int> m;
    std::vector<std::pair<char, int>> v;

    for(char &e : s) {
        e = toupper(e);
        if(m.find(e) != m.end()) {
            m.find(e)->second++;
        } else {
            m.insert({e, 1});
        }
    }

    std::copy(m.begin(), m.end(), std::back_inserter(v));
    sort(v.begin(), v.end(), cmp);

    if(v[0].second == v[1].second) {
        std::cout << '?';
    } else {
        std::cout << v[0].first;
    }
}