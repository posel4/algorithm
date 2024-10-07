#include <iostream>
#include <queue>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main() {
    fastio;
    priority_queue<int, vector<int>> pq;
    pq.push(0);
    vector<int> v;
    int n, max = 0;
    cin >> n;
    while (n--)
    {
        int i;
        cin >> i;
        if(max < i) {
            pq.push(max);
            max = i;
        } else {
            pq.push(i);
        }
        if(i == 0) {
            v.emplace_back(max);
            max = pq.top();
            pq.pop();
        }
    }
    for(int i : v) {
        cout << i << endl;
    }
}