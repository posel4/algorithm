#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <queue>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define MAX 100001

using namespace std;

int n, k, ans = INT_MAX;
int visited[MAX];

struct pos {
	int x;
	int cnt;
};

void bfs(pos start) {
	queue<pos> q;
	q.push(start);

	while (!q.empty()) {
		pos here = q.front();
		int x = here.x;
		int cnt = here.cnt;
		q.pop();

		if (x == k) {
			ans = cnt < ans ? cnt : ans;
			continue;
		}

		int nx = x + 1;
		if (0 <= nx && nx < MAX && !visited[nx]) {
			visited[x + 1] = true;
			q.push({ x + 1, cnt + 1 });
		}
		nx = x - 1;
		if (0 <= nx && nx < MAX && !visited[nx]) {
			visited[x - 1] = true;
			q.push({ x - 1, cnt + 1 });
		}
		nx = x * 2;
		if (0 <= nx && nx < MAX && !visited[nx]) {
			visited[x * 2] = true;
			q.push({ x * 2, cnt + 1 });
		}

	}
}

int main() {
	fastio;
	cin >> n >> k;
	bfs({ n, 0 });
	cout << ans;
	return 0;
}