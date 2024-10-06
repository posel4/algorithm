#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define MAX 50

using namespace std;

int t, m, n, k, cnt = 0;
int dx[4] = {1, -1 , 0, 0};
int dy[4] = {0, 0, 1, -1};
int farm[MAX][MAX] = {0, };

void dfs(int x, int y) {
    farm[x][y] = 0; // visited

    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(0 <= nx && nx < m && 0 <= ny && ny < n && farm[nx][ny]) {
            dfs(nx, ny);
        }
    }
}

void input() {
    cnt = 0;
    fill(&farm[0][0], &farm[0][0] + MAX * MAX, 0);

    cin >> m >> n >> k;
    while(k--) {
        int i, j;
        cin >> i >> j;
        farm[i][j] = 1;
    }
}

int main() {
   fastio;
   cin >> t;
   while(t--) {
    input();
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(farm[i][j]) {
                ++cnt;
                dfs(i, j);
            }
        }
    }
    cout << cnt << endl;
   }
}