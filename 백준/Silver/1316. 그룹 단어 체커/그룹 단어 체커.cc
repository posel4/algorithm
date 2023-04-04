#include <iostream>
#include <unordered_set>

bool checkGroup(std::string st) {
    char c = st[0];
    std::unordered_set s = {c};
    for (int i = 1; i < st.length(); i++)
    {
        char n = st[i];
        if (n != c)
        {
            if (s.count(n))
                return false;
            else {
                c = n;
                s.insert(n);
            }
        }
    }
    return true;
}

int main() {
    int n, cnt = 0;
    std::cin >> n;
    while(n--) {
        std::string st;
        std::cin >> st;
        if(checkGroup(st))
            cnt++;
    }
    std::cout << cnt;
}