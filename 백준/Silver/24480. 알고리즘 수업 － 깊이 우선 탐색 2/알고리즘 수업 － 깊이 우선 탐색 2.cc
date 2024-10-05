#include <iostream>
#include <vector>
#include <set>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

struct compare {
    bool operator()(const int a, const int b) const {
        return a > b;  // 내림차순
    }
};

vector<multiset<int, compare>> adj;
vector<int> visited;
int n, m, r, cnt = 0;

void dfs(int here) {
    visited[here] = ++cnt;
    for(int there : adj[here]) {
        if(!visited[there])
            dfs(there);
    }
}

void input() {
    cin >> n >> m >> r;
    adj.resize(n + 1);
    visited.resize(n + 1);

    while(m--) {
        int u, v;
        cin >> u >> v;
        adj[u].insert(v);
        adj[v].insert(u);
    }
}

void print() {
    for(int i = 1; i <= n; i++) {
        cout << visited[i] << endl;
    }
}

int main() {
    fastio;
    input();
    dfs(r);
    print();
}