#include <string>
#include <vector>

using namespace std;

int count(int n) {
    int i;
    for(i = 0; n != 0; i++) {
        n &= (n - 1);
    }
    return i;
}

int solution(int n) {
    int next = n;
    while(count(n) != count(++next));
    return next;
}