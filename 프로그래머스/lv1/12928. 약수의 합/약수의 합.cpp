#include <string>
#include <vector>
#include <numeric>
#include <cmath>
#include <iostream>

using namespace std;

int solution(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    int answer = 1 + n;
    for(int i = 2; i <= (int)sqrt(n); i++) {
        if(n % i == 0)
            answer += i + (n / i);
        if(n == i * i)
            answer -= i;
    }
    return answer;
}