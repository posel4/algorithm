#include<vector>
#include<algorithm>
using namespace std;
 
bool cmp(int a, int b)
{
    if (a > b) return true;
    return false;
}
 
int solution(vector<int> A, vector<int> B)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), cmp);
    int sum = 0;
    for (int i = 0; i < A.size(); i++)
        sum += A[i] * B[i];
    return sum;
}