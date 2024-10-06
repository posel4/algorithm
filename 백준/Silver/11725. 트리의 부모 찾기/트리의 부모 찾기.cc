#include <iostream>
#include <vector>
#include <queue>

using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define MAX 100001

int n;
int parent[MAX];
bool visited[MAX];
vector<int> graph[MAX];

void input() {
	cin >> n;
	for(int i = 0; i < n - 1; i++) {
		int u, v; 
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
}

void bfs(int start) {
	queue<int> q;
	q.push(start);
	visited[start] = true;

	while (!q.empty()) {
		int here = q.front();
		q.pop();

		for (int there : graph[here]) {
			if (!visited[there]) {
				parent[there] = here;
				q.push(there);
				visited[there] = true;
			}
		}
	}
}

void print() {
	for (int i = 2; i <= n; i++) {
		cout << parent[i] << endl;
	}
}

int main() {
	fastio;
	input();
	bfs(1); // 루트 : 1
	print();
}
