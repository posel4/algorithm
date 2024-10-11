#include <iostream>
#include <queue>
#include <vector>
#include <climits>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define INF INT_MAX
#define MAX 1000001

using namespace std;

int n, m, u, v;
vector<vector<int>> graph;
vector<int> visited;

void input() {
    graph.assign(n + 1, vector<int>());
    visited.assign(n + 1, false);

    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        graph[u].emplace_back(v);
        graph[v].emplace_back(u);
    }
}

bool dfs(int here, int before) {
    visited[here] = true;

    for (int there : graph[here]) {
        if (there == before)  continue; // 바로 이전에 방문한 곳인 경우 pass (양방향 그래프 고려)
        if (visited[there]) return false;
        if (!dfs(there, here)) return false;
    }
    return true;
}

int main() {
    fastio;
    int c = 0;
    while (true) {
        int tree = 0;
        cin >> n >> m;
        if (!n && !m)
            break;

        input();
        c++;

        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                if (dfs(i, 0))
                    tree++;
            }
        }

        if (tree == 0)   cout << "Case " << c << ": No trees." << endl;
        else if (tree == 1)  cout << "Case " << c << ": There is one tree." << endl;
        else cout << "Case " << c << ": A forest of " << tree << " trees." << endl;
    }

    return 0;
}