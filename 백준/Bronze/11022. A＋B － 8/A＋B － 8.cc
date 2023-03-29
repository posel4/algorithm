#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << "\n";
    }
}