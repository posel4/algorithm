#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <queue>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define MAX 100

using namespace std;

int map[MAX][MAX];
int visited[MAX][MAX];
int n, m, ans = INT_MAX;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1,  0, -1 };

struct pos {
	int x;
	int y;
	int cnt;
};

void bfs(pos start) {
	queue<pos> q;

	q.push(start);

	int sx = start.x;
	int sy = start.y;
	visited[sx][sy] = true;

	while (!q.empty()) {
		pos here = q.front();
		int x = here.x;
		int y = here.y;
		int cnt = here.cnt;
		q.pop();

		if (x == n - 1 && y == m - 1) {
			ans = cnt < ans ? cnt : ans;
			continue;
		}

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (0 <= nx && nx < n && 0 <= ny && ny < m && map[nx][ny] && !visited[nx][ny]) {
				visited[nx][ny] = true;
				q.push({ nx, ny, cnt + 1 });
			}
		}
	}



}

void clear() {
	fill(&map[0][0], &map[0][0] + MAX * MAX, 0);
	fill(&visited[0][0], &visited[0][0] + MAX * MAX, 0);
	ans = INT_MAX;
}

void input() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			map[i][j] = s.at(j) - '0';
		}
	}
}

int main() {
	fastio;
	clear();
	input();
	bfs({ 0, 0, 1 });
	cout << ans;
	return 0;
}