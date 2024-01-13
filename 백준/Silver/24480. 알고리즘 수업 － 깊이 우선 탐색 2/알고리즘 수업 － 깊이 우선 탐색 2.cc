#include<iostream>
#include<algorithm>

std::vector<int> adj[100001];
bool visited[100001] = {false, };
int result[100001];
int cnt = 0;

void dfs(int here) {
    visited[here] = true;
    result[here] = ++cnt;

    for (int i = 0; i < adj[here].size(); i++) {
        int there = adj[here][i];
        if(!visited[there])
            dfs(there);
    }
}

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m, r;
    std::cin >> n >> m >> r;
    while(m--) {
        int u, v;
        std::cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++) {
        std::sort(adj[i].begin(), adj[i].end(), cmp);
    }
    dfs(r);
    for (int i = 1; i <= n; i++) {
        std::cout << result[i] << "\n";
    }
}