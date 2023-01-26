#include <bitset>

using namespace std;

int solution(int n)
{
    int num = bitset<20>(n).count();

    while (bitset<20>(++n).count() != num);
    return n;
}

/*
 * // bitset::count
 * #include <iostream>       // std::cout
 * #include <string>         // std::string
 * #include <bitset>         // std::bitset

 * int main ()
 * {
 *   std::bitset<8> foo (std::string("10110011"));

 *   std::cout << foo << " has ";
 *   std::cout << foo.count() << " ones and ";
 *   std::cout << (foo.size()-foo.count()) << " zeros.\n";

 *   return 0;
 * }
 *
 * 출력 결과 : 10110011 has 5 ones and 3 zeros.
 */
