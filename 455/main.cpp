#include <iostream>
#include "Solution.hpp"

int main() {
    Solution so;
    std::vector<int> g({
                               1, 2, 3, 4, 5, 6, 7, 8, 9, 10
                       });
    std::vector<int> s({
                               1, 1, 1, 1, 1, 2, 3, 4, 4, 5, 5, 5, 6, 7, 8, 8, 9, 9, 9, 9, 9
                       });
    std::cout << so.findContentChildren(g, s);
    return 0;
}
