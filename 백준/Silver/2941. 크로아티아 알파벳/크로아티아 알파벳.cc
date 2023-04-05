#include <iostream>
#include <string>
std::string s;

void replace(std::string t, std::string n) {
    while(s.find(t) != std::string::npos) {
        s.replace(s.find(t), t.length(), n);
    }
}

int main() {
    std::cin >> s;
    std::string c[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    for(auto e : c) {
        replace(e, "A");
    }
    std::cout << s.length();
}