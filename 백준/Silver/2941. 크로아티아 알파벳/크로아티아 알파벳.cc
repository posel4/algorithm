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
    replace("c=", "A");
    replace("c-", "B");
    replace("dz=", "C");
    replace("d-", "D");
    replace("lj", "E");
    replace("nj", "F");
    replace("s=", "G");
    replace("z=", "H");
    std::cout << s.length();
}