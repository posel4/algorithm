#include <iostream>
#include <algorithm>
#include <cstring>

#define endl "\n"
#define MAX 50

bool map[MAX][MAX];
bool visited[MAX][MAX];
int cnt = 0;

void bfs(int i, int j) {
    visited[i][j] = true;
    // left
    if(0 < j && map[i][j - 1] && !visited[i][j - 1]) {
        bfs(i, j - 1);
    }
    // right
    if(j < MAX - 1 && map[i][j + 1] && !visited[i][j + 1]) {
        bfs(i, j + 1);
    }
    // up
    if(0 < i && map[i - 1][j] && !visited[i - 1][j]) {
        bfs(i - 1, j);
    }
    // down
    if(i < MAX - 1 && map[i + 1][j] && !visited[i + 1][j]) {
        bfs(i + 1, j);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    std::cin >> t;

    while(t--) {
        int m, n, k;
        std::cin >> m >> n >> k;
        cnt = 0;

        std::memset(map, false, sizeof(map));
        std::memset(visited, false, sizeof(visited));

        while (k--) {
            int x, y;
            std::cin >> x >> y;
            map[y][x] = true;
        }

        for(int x = 0; x < n; ++x) {
            for(int y = 0; y < m; ++y) {
                if(map[x][y] && !visited[x][y]) {
                    ++cnt;
                    bfs(x, y);
                }
            }
        }

        std::cout << cnt << endl;
    }

    return 0;
}
