#include <iostream>
#include "Solution.hpp"

int main() {
    Solution s;
    vector<vector<int>> vv;
    vv.push_back(std::vector<int>({1, 2}));
    vv.push_back(std::vector<int>({2, 3}));
    vv.push_back(std::vector<int>({3, 4}));
    vv.push_back(std::vector<int>({1, 3}));
    auto result = s.eraseOverlapIntervals(vv);
    return 0;
}
