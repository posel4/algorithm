#include <iostream>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAX 41

using namespace std;

int f[MAX];
int c1 = 0, c2 = 0;

int fib(int n) {
    if (n == 1 || n == 2) {
        ++c1;
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int fibonacci(int n) {
    f[1] = 1;
    f[2] = 1;
    for(int i = 3; i <= n; i++) {
        ++c2;
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main() {
    int n;
    cin >> n;
    fib(n);
    fibonacci(n);
    cout << c1 << " " << c2;
}