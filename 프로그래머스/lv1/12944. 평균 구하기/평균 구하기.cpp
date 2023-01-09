#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for(vector<int>::iterator iter = arr.begin(); iter != arr.end(); iter++) {
        answer += *iter;
    }
    return answer / arr.size();
}