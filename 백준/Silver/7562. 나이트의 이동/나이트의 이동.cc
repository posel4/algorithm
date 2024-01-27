#include <iostream>
#include <queue>

#define endl "\n"
#define MAX 301

int discovered[MAX][MAX];
int dist[MAX][MAX];
int size;
// 1사분면에서 움직인다.
int dx[] = {1,2,2,1,-1,-2,-2,-1};
int dy[] = {2,1,-1,-2,-2,-1,1,2};

void visit(std::queue<std::pair<int, int>>& q, int here_x, int here_y, int there_x, int there_y) {
        dist[there_x][there_y] = dist[here_x][here_y] + 1;
        discovered[there_x][there_y] = true;
        q.push(std::make_pair(there_x, there_y));
}

void bfs(int start_x, int start_y, int end_x, int end_y) {
    discovered[start_x][start_y] = true;
    std::queue<std::pair<int, int>> q;
    q.push(std::make_pair(start_x, start_y));

    dist[start_x][start_y] = 0;

    while(!q.empty()) {
        std::pair<int, int> here = q.front();
        q.pop();

        int here_x = here.first;
        int here_y = here.second;

        if(here_x == end_x && here_y == end_y) {
            break;
        }

        discovered[here_x][here_y] = true;

        for(int i = 0; i < 8; ++i) {
            int there_x = here_x + dx[i];
            int there_y = here_y + dy[i];
            if(0 <= there_x && there_x < size  && 0 <= there_y && there_y < size && !discovered[there_x][there_y]) {
                visit(q, here_x, here_y, there_x, there_y);
            }
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    std::cin >> t;

    while(t--) {
        std::fill(&discovered[0][0], &discovered[MAX - 1][MAX - 1], false);
        std::fill(&dist[0][0], &dist[MAX - 1][MAX - 1], MAX);

        std::cin >> size;
        int start_x, start_y, end_x, end_y;
        std::cin >> start_x >> start_y >> end_x >> end_y;

        bfs(start_x, start_y, end_x, end_y);
        std::cout << dist[end_x][end_y] << endl;
    }

    return 0;
}
