#include <iostream>
#include <vector>
#include <stack>
#include <string>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main() {
	fastio;

	int t;
	cin >> t;
	while (t--) {
		int cnt = 0;
		string s;
		cin >> s;
		for (char c : s) {
			if (cnt < 0)
				break;
			if (c == '(')
				++cnt;
			else if (c == ')')
				--cnt;
		}
		cout << (cnt == 0 ? "YES" : "NO") << endl;
	}

	return 0;
}
