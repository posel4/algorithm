#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
using namespace std;

int n;
priority_queue<int, vector<int>, greater<int>> pq;

int main() {
	cin >> n;
	while(n--) {
		int x;
		cin >> x;
		pq.push(x);
	}
	while (!pq.empty()) {
		cout << pq.top() << endl;
		pq.pop();
	}
}