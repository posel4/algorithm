#include <iostream>
#include <vector>
#include <cstring>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAX 100001
using namespace std;

vector <pair<int, int>> graph[MAX];
int visited[MAX] = { 0, };
int n, maxdist = 0, maxnode;

void input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int u, v, w;
		cin >> u >> v;
		while (v != -1) {
			cin >> w;
			graph[u].push_back({ v, w });
			graph[v].push_back({ u, w });
			cin >> v;
		}
	}
}

void dfs(int here, int dist) {
	if (visited[here])
		return;
	if (maxdist < dist) {
		maxdist = dist;
		maxnode = here;
	}
	visited[here] = true;
	for (auto& next : graph[here]) {
		int there = next.first;
		int weight = next.second;
		dfs(there, dist + weight);
	}
}

int main() {
	fastio;
	input();
	dfs(1, 0);
	memset(visited, false, sizeof(visited));
	maxdist = 0;
	dfs(maxnode, 0);
	cout << maxdist;
	return 0;
}