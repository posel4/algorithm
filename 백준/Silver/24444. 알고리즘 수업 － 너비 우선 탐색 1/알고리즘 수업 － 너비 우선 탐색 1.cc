#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define endl "\n"

std::vector<int> adj[100001];
bool discovered[100001] = {false };
std::queue<int> q;
int result[100001] = { 0 };
int cnt = 0;

void bfs(int start) {
    discovered[start] = true;
    q.push(start);

    while(!q.empty()) {
        int here = q.front();
        q.pop();
        result[here] = ++cnt;
        for(int i = 0; i < adj[here].size(); ++i) {
            int there = adj[here][i];
            if(!discovered[there]) {
                q.push(there);
                discovered[there] = true;
            }
        }
    }
}

int main() {
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m, r;
    int u, v;
    std::cin >> n >> m >> r;

    while(m--) {
        std::cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1; i <= n; ++i) {
        std::sort(adj[i].begin(), adj[i].end(), std::less<int>());
    }

    bfs(r);

    for(int i = 1; i <= n; ++i) {
        std::cout << result[i] << endl;
    }

    return 0;
}
