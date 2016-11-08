/*
 * ID: andmer1
 * PROG: ride
 * LANG: C++11
 */
#include <algorithm>
#include <iostream>
#include <fstream>

const long decode(const std::string& str) {
    const static std::vector<char> table = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
                                            'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
                                            'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
                                            'y', 'z'};
    long result = 1;
    std::for_each(str.begin(), str.end(), [&](char c) {
        auto loc = std::find(table.begin(), table.end(), tolower(c));
        auto idx = std::distance(table.begin(), loc) + 1;
        result *= idx;
        printf("%c == %li\n", c, idx);
    });
    printf("%s == %li\n", str.c_str(), result % 47);
    return result % 47;
}

const std::string test(const std::string& x, const std::string& y) {
    return decode(x) == decode(y) ? "GO" : "STAY";
}

int main() {
    std::ofstream fout{"ride.out"};
    std::ifstream fin{"ride.in"};
    std::string x, y;
    fin >> x >> y;
    fout << test(x, y) << std::endl;
    return 0;
}
