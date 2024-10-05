#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define MAX 26

using namespace std;

vector<vector<int>> adj;
vector<vector<bool>> visited;
vector<int> result;
int n, cnt = 0;

void dfs(int i, int j) {
    visited[i][j] = true;
    cnt++;
    if(i - 1 >= 0 && adj[i - 1][j] && !visited[i - 1][j]) {
        dfs(i - 1, j);
    }
    if(i + 1 < n && adj[i + 1][j] && !visited[i + 1][j]) {
        dfs(i + 1, j);
    }
    if(j - 1 >= 0 && adj[i][j - 1] && !visited[i][j - 1]) {
        dfs(i, j - 1);
    }
    if(j + 1 < n && adj[i][j + 1] && !visited[i][j + 1]) {
        dfs(i, j + 1);
    }
}

void input() {
    adj.resize(MAX, vector<int>(MAX));
    visited.resize(MAX, vector<bool>(MAX));
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < n; j++) {
            adj[i][j] = row[j] - '0';
        }
    }
}

void print() {
    cout << result.size() << endl;
    sort(result.begin(), result.end());
    for(int i : result) {
        cout << i << endl;
    }
}

int main() {
    fastio;
    cin >> n;
    input();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(adj[i][j] && !visited[i][j]) {
                cnt = 0;
                dfs(i, j);
                result.push_back(cnt);
            }
        }
    }
    print();
}