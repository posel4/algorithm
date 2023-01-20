#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    unordered_set<string> s;
    s.insert(words[0]);
    int cnt = words.size();
    for(int i = 1; i < cnt; i++) {
        string w = words[i];
        // 끝말잇기 체크, 중복 체크
        if(words[i - 1].back() != w[0] || s.count(w)) {
            int num = ++i % n;
            if(num == 0)
                return {n, i / n};
            else
                return {num, i / n + 1};
        }
        else
            s.insert(w);
    }
    return {0, 0};
}