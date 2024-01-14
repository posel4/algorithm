#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"

const int MAX = 25;
std::string inp[MAX];
bool visited[MAX][MAX] = { false };
std::vector<int> result;
int cnt = 0;

void bfs(int i, int j) {
    visited[i][j] = true;
    cnt++;
    // left
    if(0 < j && inp[i][j - 1] == '1' && !visited[i][j - 1]) {
        bfs(i, j - 1);
    }
    // right
    if(j < MAX - 1 && inp[i][j + 1] == '1' && !visited[i][j + 1]) {
        bfs(i, j + 1);
    }
    // up
    if(0 < i && inp[i - 1][j] == '1' && !visited[i - 1][j]) {
        bfs(i - 1, j);
    }
    // down
    if(i < MAX - 1 && inp[i + 1][j] == '1' && !visited[i + 1][j]) {
        bfs(i + 1, j);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    std::cin >> n;

    for(int i = 0; i < n; ++i) {
        std::cin >> inp[i];
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(inp[i][j] == '1' && !visited[i][j]) {
                bfs(i, j);
                result.emplace_back(cnt);
                cnt = 0;
            }
        }
    }

    int len = result.size();
    std::cout << len << endl;
    std::sort(result.begin(), result.end());
    for(int i = 0; i < len; ++i) {
        std::cout << result[i] << endl;
    }

    return 0;
}
