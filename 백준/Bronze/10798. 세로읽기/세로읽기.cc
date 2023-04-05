#include <iostream>
#include <string>
#include <algorithm>

std::string word[5];

int main(void) {

    for (int i = 0; i < 5; i++)
        std::cin >> word[i];

    for (int i = 0; i < 15; i++)
        for (int j = 0; j < 5; j++)
            if (i < word[j].size()) // word[j]의 인덱스 범위 내에서만 출력
                std::cout << word[j][i];
    std::cout << std::endl;
    return 0;
}
