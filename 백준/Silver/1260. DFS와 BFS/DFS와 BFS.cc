#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<bool> discovered;
int n, m, r;

vector<int> dfs_ans;
vector<int> bfs_ans;

void dfs(int here) {
    visited[here] = true;
    dfs_ans.push_back(here);
    for(int there : adj[here]) {
        if(!visited[there])
            dfs(there);
    }
}

void bfs(int start) {
    queue<int> q;

    q.push(start);
    discovered[start] = true;

    while(!q.empty()) {
        int here = q.front();
        q.pop();

        discovered[here] = true;
        bfs_ans.push_back(here);

        for(int there : adj[here]) {
            if(!discovered[there]) {
                q.push(there);
                discovered[there] = true;
            }
        }
    }
}

void input() {
    cin >> n >> m >> r;
    adj.resize(n + 1);
    visited.resize(n + 1);
    discovered.resize(n + 1);

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

void print() {
    for(int i : dfs_ans) {
        cout << i << " "; 
    }
    cout << endl;
    for(int i : bfs_ans) {
        cout << i << " ";
    }
}

int main() {
    fastio;
    input();
    dfs(r);
    bfs(r);
    print();
}