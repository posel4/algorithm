#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main() {
	fastio;

	string str;
	while (getline(cin, str)) {
		if (str == ".") return 0;
		
		stack<int> s;
		bool yes = true;
		for (char c : str) {
			switch (c) {
			case '(':
			case '[':
				s.push(c);
				break;
			case ')':
				if (s.empty() || s.top() != '(') {
					yes = false;
					break;
				}
				s.pop();
				break;
			case ']':
				if (s.empty() || s.top() != '[') {
					yes = false;
					break;
				}
				s.pop();
				break;
			}
		}

		cout << (yes && s.empty() ? "yes" : "no") << endl;
	}

	return 0;
}
