#include <iostream>
#include <vector>
#include <queue>

std::vector<int> adj[100001];
bool discovered[100001] = {false };
std::queue<int> q;
int cnt = -1;

void bfs(int start) {
    discovered[start] = true;
    q.push(start);

    while(!q.empty()) {
        int here = q.front();
        q.pop();
        ++cnt;
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

    int n, m;
    int u, v;
    std::cin >> n >> m;

    while(m--) {
        std::cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1);

    std::cout << cnt;

    return 0;
}
