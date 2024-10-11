#include <iostream>
#include <queue>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAX 1001

using namespace std;

struct pos {
    int x, y, day;
};

int n, m, ans;
queue<pos> q;
int tomato[MAX][MAX];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void bfs() {
    while (!q.empty()) {
        pos here = q.front();
        q.pop();

        ans = here.day;

        for (int i = 0; i < 4; i++) {
            int nx = here.x + dx[i];
            int ny = here.y + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (tomato[nx][ny] == 0) {
                tomato[nx][ny] = 1;
                q.push({ nx, ny, here.day + 1 });
            }
        }
    }
}

void input() {
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tomato[i][j];
            if (tomato[i][j] == 1) {
                q.push({ i, j, 0 });
            }
        }
    }
}

int main() {
    fastio;

    input();
    bfs();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (tomato[i][j] == 0) {
                cout << -1;
                return 0;
            }
        }
    }

    cout << ans;
    return 0;
}
