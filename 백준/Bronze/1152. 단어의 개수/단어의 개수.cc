#include <iostream>
#include <string>

int main()
{
    std::string s;
    getline(std::cin, s);
    if (s.empty())
    {
        std::cout << 0;
        return 0;
    }

    int c = 1;
    for (auto e : s) {
        if (e == ' ')
            c++;
    }
    if (s[0] == ' ')
        c--;
    if (s[s.length() - 1] == ' ')
        c--;

    std::cout << c;
    return 0;
}