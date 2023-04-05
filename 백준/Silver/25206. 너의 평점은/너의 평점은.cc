#include <iostream>

float getScore(std::string j) {
    if (j == "A+")
        return 4.5f;
    else if (j == "A0")
        return 4.0f;
    else if (j == "B+")
        return 3.5f;
    else if (j == "B0")
        return 3.0f;
    else if (j == "C+")
        return 2.5f;
    else if (j == "C0")
        return 2.0f;
    else if (j == "D+")
        return 1.5f;
    else if (j == "D0")
        return 1.0f;
    else
        return 0.0f;
}

int main() {
    int n = 20;
    float hsum = 0;
    float sum = 0;
    while(n--) {
        std::string s;
        float h;
        std::string j;
        std::cin >> s >> h >> j;
        if(j != "P") {
            hsum += h;
            sum += h * getScore(j);
        }
    }
    float ans = sum / hsum;
    std::cout << ans;
}