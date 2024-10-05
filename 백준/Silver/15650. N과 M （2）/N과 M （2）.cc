#include <iostream>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define MAX 9
using namespace std;

int n, m;
int selected[MAX] = {0,};
bool visited[MAX] = {0,};

void dfs(int here, int cnt) {
    if(cnt == m) {
        for(int i = 0; i < m; i++)
            cout << selected[i] << " ";
        cout << endl;
        return;
    }
    for(int i = here; i <= n; i++) { // 핵심. here부터 순회
        if(!visited[i]) {
            visited[i] = true;
            selected[cnt] = i;
            dfs(i, cnt + 1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    dfs(1, 0);
}