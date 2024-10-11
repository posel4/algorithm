#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <vector>
#include <queue>
#include <cmath>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define INF INT_MAX

using namespace std;

struct node {
	int v;
	int w;

	bool operator<(const node& other) const {
		return w > other.w;
	}
};

int n, e;
int p1, p2;

// 1 -> p1 -> p2 -> end
// 1 -> p2 -> p1 -> end

vector<vector<node>> graph;

// start로부터 각 노드까지의 최단 거리
vector<int> dijkstra(int start) {
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
				dist[nv] = nw;
				pq.push({ nv, nw });
			}
		}
	}

	return dist;
}

void input() {
	cin >> n >> e;
	graph.resize(n + 1);
	while (e--) {
		int u, v, w;
		cin >> u >> v >> w;
		graph[u].push_back({ v, w });
		graph[v].push_back({ u, w });
	}
		cin >> p1 >> p2;
}

int main() {
	fastio;

	input();
	vector<int> dist_s = dijkstra(1);
	vector<int> dist_p1 = dijkstra(p1);
	vector<int> dist_p2 = dijkstra(p2);

	// 각각의 경로가 유효한지 체크
	int route1 = dist_s[p1] + dist_p1[p2] + dist_p2[n];  // 1 -> p1 -> p2 -> N 경로
	int route2 = dist_s[p2] + dist_p2[p1] + dist_p1[n];  // 1 -> p2 -> p1 -> N 경로

	// 경로 중 하나라도 INF이면 경로가 없음
	if (dist_s[p1] == INF || dist_p1[p2] == INF || dist_p2[n] == INF) route1 = INF;
	if (dist_s[p2] == INF || dist_p2[p1] == INF || dist_p1[n] == INF) route2 = INF;

	int result = min(route1, route2);

	if (result == INF) cout << -1;
	else cout << result;

	return 0;
}