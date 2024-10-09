#include <iostream>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define MAX 10000

using namespace std;

int tree[MAX];

void postOrder(int start, int end) {
	if (start >= end) { // 서브트리가 비어있는 경우
		return;
	}
	if (start == end - 1) { // 서브트리가 하나의 노드로만 구성된 경우
		cout << tree[start] << endl; // 해당 노드 출력 후 종료
		return;
	}
	int idx = start + 1; // 현재 노드의 오른쪽 자식 노드를 찾기 위해 idx 설정
	// 어떤 인덱스부터가 오른쪽 서브트리인지 찾기
	// 왼쪽 서브트리가 전부 오른쪽 서브트리보다 작다는 것을 이용해서!
	while (idx < end) {
		if (tree[start] < tree[idx]) { // tree[start]보다 큰 값을 가진 노드를 찾기
			break; // 현재 노드보다 작은 값을 가진 모든 노드(왼쪽 서브트리) 탐색
		}
		idx++;
	}

	postOrder(start + 1, idx);
	postOrder(idx, end);
	cout << tree[start] << '\n'; // preOrder의 start가 루트
}

int main() {
	fastio;
	int num;
	int idx = 0;
	while (cin >> num) {
		tree[idx++] = num;
	}

	postOrder(0, idx);

	return 0;
}