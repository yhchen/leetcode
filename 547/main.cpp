#include <iostream>
#include "Solution.hpp"

void test1() {
    Solution s;
    std::vector<std::vector<int>> vv;
    vv.push_back({1,1,0});
    vv.push_back({1,1,0});
    vv.push_back({0,0,1});
    std::cout << s.findCircleNum(vv) << std::endl;
}

int main() {
    test1();
    return 0;
}
