#include <iostream>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define MAX 100001

int n, maxDist = 0, farthest = 0;
bool visited[MAX];
vector<pair<int, int>> graph[MAX];

void input() {
	cin >> n;
	for(int i = 1; i <= n; i++) {
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

void clear() {
	maxDist = 0;
	memset(visited, false, sizeof(visited));
}

void dfs(int here, int dist) {
	visited[here] = true;

	if (dist > maxDist) {
		maxDist = dist;
		farthest = here;
	}

	for (auto& next : graph[here]) {
		int there = next.first;
		int weight = next.second;
		if (!visited[there]) {
			dfs(there, dist + weight);
		}
	}
}

void print() {
	cout << maxDist;
}

int main() {
	fastio;
	input();
	clear();
	dfs(1, 0);
	clear();
	dfs(farthest, 0);
	print();
}
