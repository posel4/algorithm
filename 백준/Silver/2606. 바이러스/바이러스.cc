#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
int n, m;

void dfs(int here) {
    visited[here] = true;
    for(int there : adj[here]) {
        if(!visited[there])
            dfs(there);
    }
}

void input() {
    cin >> n >> m;
    adj.resize(n + 1);
    visited.resize(n + 1);

    while(m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void print() {
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(visited[i]) cnt++;
    }
    cout << cnt - 1;
}

int main() {
    fastio;
    input();
    dfs(1);
    print();
}
