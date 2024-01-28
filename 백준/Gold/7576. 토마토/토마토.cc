#include <iostream>
#include <queue>

#define MAX 1001

struct tomato {
    int y, x;
};

std::queue<tomato> q;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0 , -1 };

int n, m, result = 0;
int graph[MAX][MAX];

bool is_map(int there_y, int there_x) {
    return (0 <= there_x && 0 <= there_y && there_x < m && there_y < n);
}

void bfs(void) {
    while (!q.empty()) {
        int y = q.front().y;
        int x = q.front().x;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int there_y = y + dy[i];
            int there_x = x + dx[i];

            if (is_map(there_y, there_x) && graph[there_y][there_x] == 0) {
                graph[there_y][there_x] = graph[y][x] + 1;
                q.push({there_y, there_x });
            }
        }
    }
}

int main() {
    std::cin >> m >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> graph[i][j];
            if (graph[i][j] == 1) {
                q.push({ i, j });
            }
        }
    }

    bfs();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // 다 돌았는데 익지 않은 토마토가 존재할 경우
            if (graph[i][j] == 0) {
                std::cout << -1;
                return 0;
            }
            // 토마토는 다 익었는데, 얼마만에 익었는지?
            if (result < graph[i][j]) {
                result = graph[i][j];
            }
        }
    }

    std::cout << result - 1;
    return 0;
}
