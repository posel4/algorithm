#include <iostream>
#define MAX 100

int arr[MAX];

void ymeset(int m) {
    for(int i = 0; i < m; i++) {
        arr[i] = i;
    }
}

void ymeswap(int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main()
{
    int m, n;
    std::cin >> m >> n;

    ymeset(m + 1);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        std::cin >> a >> b;
        ymeswap(a, b);
    }

    for(int i = 1; i <= m; i++) {
        std::cout << arr[i] << " ";
    }
}