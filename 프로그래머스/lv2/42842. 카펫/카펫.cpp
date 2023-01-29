#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> solution(int b, const int y) {
    b /= 2;
    int row = 3;
    int col = b - 1;
    for(int i = 2; i < b - 3; i++) {
        if(i * (b - 2 - i) == y) {
            row = i + 2;
            col = b - i;
        }
    }
    return {max(row, col), min(row, col)};
}