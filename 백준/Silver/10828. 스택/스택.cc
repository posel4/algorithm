#include <iostream>
#include <string>
#define MAX 10000

int st[MAX];
int t = -1;

void push(int n) {
    st[++t] = n;
}

int pop() {
    if(t < 0) return -1;
    else return st[t--];
}

int size() {
    return t + 1;
}

bool empty() {
    return t < 0;
}

int top() {
    if(t < 0) return t;
    else return st[t];
}

int main() {
    int n;
    std::cin >> n;
    while(n--) {
        std::string s;
        std::cin >> s;
        if(s == "push") {
            int c;
            std::cin >> c;
            push(c);
        } else if(s == "pop") {
            std::cout << pop() << "\n";
        } else if(s == "top") {
            std::cout << top() << "\n";
        } else if(s == "size") {
            std::cout << size() << "\n";
        } else if(s == "empty") {
            std::cout << empty() << "\n";
        }
    }
}