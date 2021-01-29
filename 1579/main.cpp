#include <iostream>
#include "Solution.hpp"


int test1() {
    Solution s;
    vector<vector<int>> vv;
    vv.push_back(std::vector<int>({1, 2, 1}));
//    vv.push_back(std::vector<int>({1, 2, 2}));
    return s.maxNumEdgesToRemove(2, vv);
}


int test2() {
    Solution s;
    vector<vector<int>> vv;
    vv.push_back(std::vector<int>({3, 1, 2}));
    vv.push_back(std::vector<int>({3, 2, 3}));
    vv.push_back(std::vector<int>({1, 1, 4}));
    vv.push_back(std::vector<int>({2, 1, 4}));
    return s.maxNumEdgesToRemove(4, vv);
}

int test3() {
    Solution s;
    vector<vector<int>> vv;
    vv.push_back(std::vector<int>({3, 1, 2}));
    return s.maxNumEdgesToRemove(2, vv);
}

int test4() {
    Solution s;
    vector<vector<int>> vv;
    vv.push_back(std::vector<int>({1, 1, 2}));
    vv.push_back(std::vector<int>({2, 1, 3}));
    vv.push_back(std::vector<int>({3, 2, 4}));
    vv.push_back(std::vector<int>({3, 2, 5}));
    vv.push_back(std::vector<int>({1, 2, 6}));
    vv.push_back(std::vector<int>({3, 6, 7}));
    vv.push_back(std::vector<int>({3, 7, 8}));
    vv.push_back(std::vector<int>({3, 6, 9}));
    vv.push_back(std::vector<int>({3, 4, 10}));
    vv.push_back(std::vector<int>({2, 3, 11}));
    vv.push_back(std::vector<int>({1, 5, 12}));
    vv.push_back(std::vector<int>({3, 3, 13}));
    vv.push_back(std::vector<int>({2, 1, 10}));
    vv.push_back(std::vector<int>({2, 6, 11}));
    vv.push_back(std::vector<int>({3, 5, 13}));
    vv.push_back(std::vector<int>({1, 9, 12}));
    vv.push_back(std::vector<int>({1, 6, 8}));
    vv.push_back(std::vector<int>({3, 6, 13}));
    vv.push_back(std::vector<int>({2, 1, 4}));
    vv.push_back(std::vector<int>({1, 1, 13}));
    vv.push_back(std::vector<int>({2, 9, 10}));
    vv.push_back(std::vector<int>({2, 1, 6}));
    vv.push_back(std::vector<int>({2, 10, 13}));
    vv.push_back(std::vector<int>({2, 2, 9}));
    vv.push_back(std::vector<int>({3, 4, 12}));
    vv.push_back(std::vector<int>({2, 4, 7}));
    vv.push_back(std::vector<int>({1, 1, 10}));
    vv.push_back(std::vector<int>({1, 3, 7}));
    vv.push_back(std::vector<int>({1, 7, 11}));
    vv.push_back(std::vector<int>({3, 3, 12}));
    vv.push_back(std::vector<int>({2, 4, 8}));
    vv.push_back(std::vector<int>({3, 8, 9}));
    vv.push_back(std::vector<int>({1, 9, 13}));
    vv.push_back(std::vector<int>({2, 4, 10}));
    vv.push_back(std::vector<int>({1, 6, 9}));
    vv.push_back(std::vector<int>({3, 10, 13}));
    vv.push_back(std::vector<int>({1, 7, 10}));
    vv.push_back(std::vector<int>({1, 1, 11}));
    vv.push_back(std::vector<int>({2, 4, 9}));
    vv.push_back(std::vector<int>({3, 5, 11}));
    vv.push_back(std::vector<int>({3, 2, 6}));
    vv.push_back(std::vector<int>({2, 1, 5}));
    vv.push_back(std::vector<int>({2, 5, 11}));
    vv.push_back(std::vector<int>({2, 1, 7}));
    vv.push_back(std::vector<int>({2, 3, 8}));
    vv.push_back(std::vector<int>({2, 8, 9}));
    vv.push_back(std::vector<int>({3, 4, 13}));
    vv.push_back(std::vector<int>({3, 3, 8}));
    vv.push_back(std::vector<int>({3, 3, 11}));
    vv.push_back(std::vector<int>({2, 9, 11}));
    vv.push_back(std::vector<int>({3, 1, 8}));
    vv.push_back(std::vector<int>({2, 1, 8}));
    vv.push_back(std::vector<int>({3, 8, 13}));
    vv.push_back(std::vector<int>({2, 10, 11}));
    vv.push_back(std::vector<int>({3, 1, 5}));
    vv.push_back(std::vector<int>({1, 10, 11}));
    vv.push_back(std::vector<int>({1, 7, 12}));
    vv.push_back(std::vector<int>({2, 3, 5}));
    vv.push_back(std::vector<int>({3, 1, 13}));
    vv.push_back(std::vector<int>({2, 4, 11}));
    vv.push_back(std::vector<int>({2, 3, 9}));
    vv.push_back(std::vector<int>({2, 6, 9}));
    vv.push_back(std::vector<int>({2, 1, 13}));
    vv.push_back(std::vector<int>({3, 1, 12}));
    vv.push_back(std::vector<int>({2, 7, 8}));
    vv.push_back(std::vector<int>({2, 5, 6}));
    vv.push_back(std::vector<int>({3, 1, 9}));
    vv.push_back(std::vector<int>({1, 5, 10}));
    vv.push_back(std::vector<int>({3, 2, 13}));
    vv.push_back(std::vector<int>({2, 3, 6}));
    vv.push_back(std::vector<int>({2, 2, 10}));
    vv.push_back(std::vector<int>({3, 4, 11}));
    vv.push_back(std::vector<int>({1, 4, 13}));
    vv.push_back(std::vector<int>({3, 5, 10}));
    vv.push_back(std::vector<int>({1, 4, 10}));
    vv.push_back(std::vector<int>({1, 1, 8}));
    vv.push_back(std::vector<int>({3, 3, 4}));
    vv.push_back(std::vector<int>({2, 4, 6}));
    vv.push_back(std::vector<int>({2, 7, 11}));
    vv.push_back(std::vector<int>({2, 7, 10}));
    vv.push_back(std::vector<int>({2, 3, 12}));
    vv.push_back(std::vector<int>({3, 7, 11}));
    vv.push_back(std::vector<int>({3, 9, 10}));
    vv.push_back(std::vector<int>({2, 11, 13}));
    vv.push_back(std::vector<int>({1, 1, 12}));
    vv.push_back(std::vector<int>({2, 10, 12}));
    vv.push_back(std::vector<int>({1, 7, 13}));
    vv.push_back(std::vector<int>({1, 4, 11}));
    vv.push_back(std::vector<int>({2, 4, 5}));
    vv.push_back(std::vector<int>({1, 3, 10}));
    vv.push_back(std::vector<int>({2, 12, 13}));
    vv.push_back(std::vector<int>({3, 3, 10}));
    vv.push_back(std::vector<int>({1, 6, 12}));
    vv.push_back(std::vector<int>({3, 6, 10}));
    vv.push_back(std::vector<int>({1, 3, 4}));
    vv.push_back(std::vector<int>({2, 7, 9}));
    vv.push_back(std::vector<int>({1, 3, 11}));
    vv.push_back(std::vector<int>({2, 2, 8}));
    vv.push_back(std::vector<int>({1, 2, 8}));
    vv.push_back(std::vector<int>({1, 11, 13}));
    vv.push_back(std::vector<int>({1, 2, 13}));
    vv.push_back(std::vector<int>({2, 2, 6}));
    vv.push_back(std::vector<int>({1, 4, 6}));
    vv.push_back(std::vector<int>({1, 6, 11}));
    vv.push_back(std::vector<int>({3, 1, 2}));
    vv.push_back(std::vector<int>({1, 1, 3}));
    vv.push_back(std::vector<int>({2, 11, 12}));
    vv.push_back(std::vector<int>({3, 2, 11}));
    vv.push_back(std::vector<int>({1, 9, 10}));
    vv.push_back(std::vector<int>({2, 6, 12}));
    vv.push_back(std::vector<int>({3, 1, 7}));
    vv.push_back(std::vector<int>({1, 4, 9}));
    vv.push_back(std::vector<int>({1, 10, 12}));
    vv.push_back(std::vector<int>({2, 6, 13}));
    vv.push_back(std::vector<int>({2, 2, 12}));
    vv.push_back(std::vector<int>({2, 1, 11}));
    vv.push_back(std::vector<int>({2, 5, 9}));
    vv.push_back(std::vector<int>({1, 3, 8}));
    vv.push_back(std::vector<int>({1, 7, 8}));
    vv.push_back(std::vector<int>({1, 2, 12}));
    vv.push_back(std::vector<int>({1, 5, 11}));
    vv.push_back(std::vector<int>({2, 7, 12}));
    vv.push_back(std::vector<int>({3, 1, 11}));
    vv.push_back(std::vector<int>({3, 9, 12}));
    vv.push_back(std::vector<int>({3, 2, 9}));
    vv.push_back(std::vector<int>({3, 10, 11}));
    return s.maxNumEdgesToRemove(13, vv);
}


int main() {
//    std::cout << test1() << std::endl;
//    std::cout << test2() << std::endl;
//    std::cout << test3() << std::endl;
    std::cout << test4() << std::endl;
    return 0;
}
