#include <iostream>
#include <vector>
#include <unordered_map>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

vector<int> inorder, postorder;
unordered_map<int, int> inorder_idx;
int n;

void get_preorder(int in_start, int in_end, int post_start, int post_end) {
    if (in_start > in_end || post_start > post_end)
        return;

    // 포스트오더의 마지막 값이 루트 노드이다.
    int root = postorder[post_end];
    cout << root << " ";

    // 인오더에서 루트 노드의 위치를 찾는다.
    int root_idx = inorder_idx[root];

    // 왼쪽 서브트리의 크기
    int left_size = root_idx - in_start;

    // 왼쪽 서브트리 탐색
    get_preorder(in_start, root_idx - 1, post_start, post_start + left_size - 1);

    // 오른쪽 서브트리 탐색
    get_preorder(root_idx + 1, in_end, post_start + left_size, post_end - 1);
}

void input() {
    cin >> n;

    inorder.resize(n);
    postorder.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> inorder[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> postorder[i];
    }

    for (int i = 0; i < n; ++i) {
        inorder_idx[inorder[i]] = i;
    }
}

int main() {
    fastio;
    input();
    get_preorder(0, n - 1, 0, n - 1);
}
