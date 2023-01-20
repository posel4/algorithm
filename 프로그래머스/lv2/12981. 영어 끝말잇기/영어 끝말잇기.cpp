#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    unordered_set<string> s = {words[0]};
    for(int i = 1; i < words.size(); i++) {
        // 끝말잇기 체크, 중복 체크
        if(words[i - 1].back() != words[i][0] || s.count(words[i])) 
            return {i % n + 1, i / n + 1};
        else
            s.insert(words[i]);
    }
    return {0, 0};
}