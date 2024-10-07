#include <iostream>
#include <queue>
#include <algorithm>
#include <climits>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main() {
    fastio;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> v;
    int n, min = INT_MAX;
    cin >> n;
    while (n--)
    {
        int i;
        cin >> i;
        if(i == 0) {
            if(pq.empty()) {
                v.emplace_back(0);
            } else {
                v.emplace_back(pq.top());
                pq.pop();
            }
            continue;
        }
        if(i < min && min != INT_MAX) {
            pq.push(min);
            min = i;
        } else {
            pq.push(i);
        }
    }
    for(int i : v) {
        cout << i << endl;
    }
}