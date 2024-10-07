#include <iostream>
#include <queue>
#include <algorithm>
#include <climits>
#include <cmath>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

struct compare {
    bool operator()(const int a, const int b) const {
        int abs_a = std::abs(a);
        int abs_b = std::abs(b);
        if(abs_a == abs_b) {
            return a > b; // 오름차순. 작은 것이 우선순위가 높음.
        } else {
            return abs_a > abs_b;
        }
    }
};

int main() {
    fastio;
    priority_queue<int, vector<int>, compare> pq;
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