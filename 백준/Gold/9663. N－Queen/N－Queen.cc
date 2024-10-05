#include <iostream>
#define MAX 15
using namespace std;

int col[MAX]; //i번째 행에 놓인 퀸의 열 번호
int n, ans = 0;

bool check(int row) { // 현재 확인 중인 행 번호
    for(int i = 0; i < row; i++) {
        bool vertical = col[i] == col[row]; // i번째 행에 놓인 퀸의 열 번호 == row행에 놓인 퀸의 열 번호.
                                            // true면 같은 열에 퀸이 있다.
        bool diagonal = (abs(col[row] - col[i]) == row - i); 
        //col[i]가 의미하는 것이 X좌표, i가 의미하는것이 Y좌표이므로 차이가 일정하다면 대각선에 있다고 볼 수 있다.

        if(vertical || diagonal)
            return false;
    }

    return true;
}

void nqueen(int x) {
    if(x == n)
        ans++;
    else {
        for(int i = 0; i < n; i++) {
            col[x] = i; // 해당 위치에 퀸을 배치
            if(check(x)) // 유효하다면 다음행의 퀸 배치, 유효하지않다면 다른 위치로 퀸 배치 변경
                nqueen(x+1);
        }
    }
}
int main() {
    cin >> n;
    nqueen(0);
    cout << ans;
}