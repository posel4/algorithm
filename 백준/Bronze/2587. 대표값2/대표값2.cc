#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main() {
    int n = 5;
    double sum = 0;
    vector<int> num(n);
    for(int i = 0; i < n; i++) {
        cin >> num[i];
        sum += num[i];
    }
    sort(num.begin(), num.end());
    cout << sum / n << endl;
    cout << num[n / 2] << endl;
}