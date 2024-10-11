#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main() {
	fastio;

	int n;
	cin >> n;
	vector<int> stack;

	while (n--) {
		int cmd;
		cin >> cmd;

		switch (cmd) {
		case 1:
			int x;
			cin >> x;
			stack.push_back(x);
			break;
		case 2:
			if (!stack.empty()) {
				cout << stack.back() << endl;
				stack.pop_back();
			}
			else {
				cout << -1 << endl;
			}
			break;
		case 3:
			cout << stack.size() << endl;
			break;
		case 4:
			cout << (stack.empty() ? 1 : 0) << endl;
			break;
		case 5: // 5: 스택의 맨 위 정수 출력
			if (!stack.empty()) {
				cout << stack.back() << endl;
			}
			else {
				cout << -1 << endl;
			}
			break;
		}
	}

	return 0;
}
