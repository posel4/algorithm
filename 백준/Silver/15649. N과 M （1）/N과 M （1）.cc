#include <iostream>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define MAX 9
using namespace std;

int n, m;
int selected[MAX] = {0,};
bool visited[MAX] = {0,};

void dfs(int cnt) {
    if(cnt == m) {
        for(int i = 0; i < m; i++)
            cout << selected[i] << " ";
        cout << endl;
        return;
    }
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            visited[i] = true;
            selected[cnt] = i;
            dfs(cnt + 1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    dfs(0);
}