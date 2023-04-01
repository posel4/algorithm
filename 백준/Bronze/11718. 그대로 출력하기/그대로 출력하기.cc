#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string s;
    while (true)
    {
        getline(std::cin, s);
        if (s == "")
            break;
        std::cout << s << std::endl;
    }
    return 0;
}