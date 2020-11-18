#include <iostream>
#include "./Solution.hpp"

void PrintVec(const vector<vector<int>> &rVec) {
    std::cout << "[";
    for (auto &v : rVec) {
        std::cout << "[";
        for (auto i = 0; i < v.size(); ++i) {
            if (i + 1 != v.size()) std::cout << i <<",";
            else std::cout << i;
        }
        std::cout << "],";
    }
    std::cout << "]" << std::endl;
}

int main() {
    Solution solution;
    PrintVec(solution.allCellsDistOrder(3, 3, 1, 1));
    return 0;
}
