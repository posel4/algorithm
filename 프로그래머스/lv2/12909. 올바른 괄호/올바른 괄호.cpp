#include<string>
#include<stack>

using namespace std;

bool solution(string s)
{
    stack<char> st;
    for(char c : s) {
        if(c == '(')
            st.push(c);
        else {
            if(st.empty() || st.top() != '(') return false;
            else st.pop();
        }

    }
    if(!st.empty()) return false;
    return true;
}