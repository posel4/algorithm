#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main() {
	fastio;

	int n, cnt = 1;
	cin >> n;
	stack<int> s;

	while (n--) {
		int m;
		cin >> m;

		if (cnt == m) cnt++;
		else s.push(m);

		// cnt 증가시켰으니까 스택 검사
		while (!s.empty() && s.top() == cnt) {
			s.pop();
			cnt++;
		}
	}

	if (s.empty()) cout << "Nice";
	else cout << "Sad";
	return 0;
}
