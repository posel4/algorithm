#include <iostream>
#include <queue>

#define endl "\n"
#define MAX 100001

int discovered[MAX];
int dist[MAX];

void visit(std::queue<int>& q, int here, int there) {
    if(0 <= there && there < MAX && !discovered[there]) {
        dist[there] = dist[here] + 1 < dist[there] ? dist[here] + 1 : dist[there];
        discovered[there] = true;
        q.push(there);
    }
}

void bfs(int start) {
    discovered[start] = true;
    std::queue<int> q;
    q.push(start);

    dist[start] = 0;

    while(!q.empty()) {
        int here = q.front();
        q.pop();

        discovered[here] = true;

        visit(q, here, here + 1);
        visit(q, here, here - 1);
        visit(q, here, here * 2);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, k;
    std::cin >> n >> k;

    std::fill(discovered, discovered + MAX, false);
    std::fill(dist, dist + MAX, MAX);

    bfs(n);

    std::cout << dist[k];

    return 0;
}
