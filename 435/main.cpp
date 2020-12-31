#include <iostream>
#include "Solution.hpp"

int test1() {
    Solution s;
    vector<vector<int>> vv;

    vv.push_back(std::vector<int>({1, 2}));
    vv.push_back(std::vector<int>({2, 3}));
    vv.push_back(std::vector<int>({3, 4}));
    vv.push_back(std::vector<int>({1, 3}));

    std::cout << s.eraseOverlapIntervals(vv) << std::endl;
}

int test2() {
    Solution s;
    vector<vector<int>> vv;

    vv.push_back(std::vector<int>({1, 2}));
    vv.push_back(std::vector<int>({2, 4}));
    vv.push_back(std::vector<int>({3, 4}));

    std::cout << s.eraseOverlapIntervals(vv) << std::endl;
}

int test3() {
    Solution s;
    vector<vector<int>> vv;

    vv.push_back(std::vector<int>({1, 2}));
    vv.push_back(std::vector<int>({11, 12}));
    vv.push_back(std::vector<int>({22, 33}));

    std::cout << s.eraseOverlapIntervals(vv) << std::endl;
}

int main() {
    test1();
    test2();
    test3();
    return 0;
}
