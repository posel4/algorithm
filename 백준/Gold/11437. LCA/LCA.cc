#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
typedef pair<int, int> p;
 
vector<int> adj[100001];
int n, parent[100001], level[100001];
 
int lca(int a, int b) {
    //a를 더 level이 높은 정점으로 맞춘다.
    if (level[a] < level[b]) swap(a, b);
 
    //두 정점의 level을 같게 만들기
    while (level[a] != level[b]) {
        a = parent[a];
    }
 
    //가리키는 정점이 같아질 때까지 거슬러 올라가기
    while (a != b) {
        a = parent[a];
        b = parent[b];
    }
 
    return a;
}
 
void set_tree(int node, int pnode) {
    //DFS로 트리 구성
    parent[node] = pnode;
    level[node] = level[pnode] + 1;
 
    for (int i = 0; i < adj[node].size(); i++) {
        int child = adj[node][i];
        if (child == pnode) continue;
 
        set_tree(child, node);
    }
}
 
void init() {
    int f, s;
    cin >> n;
 
    for (int i = 0; i < n - 1; i++) {
        cin >> f >> s;
        adj[f].push_back(s);
        adj[s].push_back(f);
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
 
    init(); // 연결된 정점 -> 인접행렬
    set_tree(1, 0); // DFS로 트리 구성
 
    int m, f, s;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> f >> s;
        printf("%d\n", lca(f, s)); // LCA 구하기
    }
 
    return 0;
}