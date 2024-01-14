// NOTE-YME) 처음에 DFS로 푸니까 계속 시간 초과. 최단 거리 찾기는 BFS로!

#include <iostream>
#include <queue>

#define endl "\n"
#define MAX 100

std::string map[MAX];
bool discovered[MAX][MAX] = {false};
int dist[101][101] = { 1, }; // distance from the start
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void bfs(int n, int m) {
    discovered[0][0] = true;
    std::queue<std::pair<int, int>> q;
    q.push(std::make_pair(0, 0));

    while(!q.empty()) {
        std::pair<int, int> here = q.front();
        q.pop();

        int hx = here.first;
        int hy = here.second;

        // down / right / up / left
        for (int i = 0; i < 4; i++)
        {
            std::pair<int, int> there = std::make_pair(hx + dx[i], hy + dy[i]);
            int tx = there.first;
            int ty = there.second;

            if (0 <= tx && tx < n && 0 <= ty && ty < m)
            {
                if (map[tx][ty] == '1' && !discovered[tx][ty])
                {
                    dist[tx][ty] = dist[hx][hy] + 1;
                    discovered[tx][ty] = true;
                    q.push(std::make_pair(tx, ty));
                }

            }

        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m;
    std::cin >> n >> m;

    for(int i = 0; i < n; ++i) {
        std::cin >> map[i];
    }

    bfs(n, m);

    std::cout << dist[n - 1][m - 1] << endl;

    return 0;
}
