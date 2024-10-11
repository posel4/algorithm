#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <queue>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define V 20001
#define E 300001
#define INF INT_MAX

using namespace std;

struct node {
	int v;
	int w;

	// 우선순위 큐에서 작은 가중치가 우선이 되도록 오버로딩
	bool operator<(const node& other) const {
		return w > other.w; // 가중치가 작은 게 높은 우선순위를 갖도록
	}
};

int n, e, k;
vector<vector<node>> graph;

void dijkstra(int start) {
	vector<int> dist(n + 1, INF);
	priority_queue<node> pq;

	dist[start] = 0;
	pq.push({ start, 0 });

	while (!pq.empty()) {
		node here = pq.top();
		int v = here.v;
		int w = here.w;
		pq.pop();

		if (w > dist[v]) continue;

		for (const auto& next : graph[v]) {
			int nv = next.v;
			int nw = w + next.w;
			if (nw < dist[nv]) {
				dist [nv] = nw;
				pq.push({ nv, nw });
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		if (dist[i] == INF) cout << "INF" << endl;
		else  cout << dist[i] << endl;
	}
}

void input() {
	cin >> n >> e >> k;
	graph.resize(V);
	while (e--) {
		int u, v, w;
		cin >> u >> v >> w;
		graph[u].push_back({ v, w });
	}
}

int main() {
	fastio;

	input();
	dijkstra(k);

	return 0;
}