#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int n, k;
vector<int> score;

int main() {
	cin >> n >> k;
	score.resize(n);
	while(n--) {
		int x;
		cin >> x;
		score.push_back(x);
	}
	sort(score.begin(), score.end(), [](int a, int b) {
		return a > b;
	});
	cout << score[k - 1];
}