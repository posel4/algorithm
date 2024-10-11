#include <iostream>
#include <vector>
#include <stack>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main() {
	fastio;

	stack<int> s;
	int k;
	cin >> k;
	while (k--) {
		int n;
		cin >> n;
		if (!n && !s.empty()) s.pop();
		else s.push(n);
	}

	int sum = 0;
	while (!s.empty()) {
		int n = s.top();
		s.pop();
		sum += n;
	}
	cout << sum;

	return 0;
}
