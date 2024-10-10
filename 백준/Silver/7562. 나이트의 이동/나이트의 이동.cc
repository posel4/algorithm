#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <queue>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define MAX 301

using namespace std;

int t, n;
int hx, hy, wx, wy;
int visited[MAX][MAX];

int dx[8] = { 1, 2,  2,  1, -1, -2, -2, -1 };
int dy[8] = { 2, 1, -1, -2, -2, -1,  1,  2 };

struct pos {
	int x;
	int y;
	int cnt;
};

void bfs(pos start) {
	queue<pos> q;
	q.push(start);
	visited[start.x][start.y] = 1;

	while (!q.empty()) {
		pos here = q.front();
		int x = here.x;
		int y = here.y;
		int cnt = here.cnt;
		q.pop();

		if (x == wx && y == wy) {
			cout << cnt << endl;
			break;
		}

		for (int i = 0; i < 8; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
			if (!visited[nx][ny]) {
				visited[nx][ny] = 1;
				q.push({ nx, ny, cnt + 1 });
			}
		}
	}
}

void clear() {
	fill(&visited[0][0], &visited[0][0] + MAX * MAX, 0);
}

int main() {
	fastio;
	cin >> t;

	while (t--) {
		clear();
		cin >> n >> hx >> hy >> wx >> wy;
		bfs({ hx, hy, 0 });
	}

	return 0;
}