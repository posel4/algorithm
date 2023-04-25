#include <iostream>
#include <set>

int main() {
    int n = 3, x, y;
    std::set<int> setX;
    std::set<int> setY;
    while(n--) {
        std::cin >> x >> y;
        if (setX.count(x))
            setX.erase(x);
        else
            setX.insert(x);
        if(setY.count(y))
            setY.erase(y);
        else
            setY.insert(y);
    }
    std::cout << *setX.begin() << " " << *setY.begin();
}