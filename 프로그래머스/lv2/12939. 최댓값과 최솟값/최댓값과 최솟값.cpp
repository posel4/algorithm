#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<int> split(string input, char delimiter) {
    vector<int> answer;
    stringstream ss(input);
    string temp;
 
    while (getline(ss, temp, delimiter)) {
        answer.push_back(stoi(temp));
    }
 
    return answer;
}

string solution(string s) {
    string answer = "";
    vector<int> v = split(s, ' ');
    sort(v.begin(), v.end());
    answer += to_string(v[0]) + " " + to_string(v[v.size() - 1]);
    return answer;
}