#include <string>
#include <vector>
#include <bitset>

using namespace std;

vector<int> solution(string s) {
    int cnt = 0;
    int zcnt = 0;
    int zero;
    int len = s.length();
    const int MAX = 150000;
    bitset<MAX> b (s);
    while(b != 1) {
        if(cnt++ != 0)
            len = b.size() - b.to_string().find('1');
        zcnt += len - b.count();
        b = bitset<MAX>(b.count());
    }
    return {cnt, zcnt};
}