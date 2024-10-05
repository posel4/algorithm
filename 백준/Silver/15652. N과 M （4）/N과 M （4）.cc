#include <iostream>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define MAX 9
using namespace std;

int n, m;
int selected[MAX] = {0,};

void dfs(int here, int cnt) {
    if(cnt == m) {
        for(int i = 0; i < m; i++)
            cout << selected[i] << " ";
        cout << endl;
        return;
    }
    for(int i = here; i <= n; i++) {
        selected[cnt] = i;
        dfs(i, cnt + 1);
    }
}

int main() {
    cin >> n >> m;
    dfs(1, 0);
}