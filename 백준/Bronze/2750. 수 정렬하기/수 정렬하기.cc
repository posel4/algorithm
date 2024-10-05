#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    while(n--) {
        int i;
        cin >> i;
        v.push_back(i);
    }
    sort(v.begin(), v.end());
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
}