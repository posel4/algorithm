#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

vector<vector<int>> adj;
vector<int> visited;
int n, m, r, cnt = 0;

void input() {
    cin >> n >> m >> r;
    adj.resize(n + 1);
    visited.resize(n + 1);

    while(m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }
}

void bfs(int start) {
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while(!q.empty()) {
        int here = q.front();
        q.pop();

        visited[here] = ++cnt;

        for(int there : adj[here]) {
            if(!visited[there]) {
                q.push(there);
                visited[there] = true;
            }
        }
    }
}

void print() {
    for(int i = 1; i <= n; i++) {
        cout << visited[i] << endl;
    }
}

int main() {
    input();
    bfs(r);
    print();
}