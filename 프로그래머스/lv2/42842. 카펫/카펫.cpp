#include <string>
#include <vector>

using namespace std;

vector<int> solution(const int b, const int y) {

    int len = b / 2 + 2;

    int row = len - 3;
    int col = 3;

    while(row >= col){
        if(row * col == (b + y)) break;

        row--;
        col++;
    }

    return {row, col};
}