#include <iostream>
#include "Solution.hpp"

int main() {
    Solution S;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j < 5; ++j) {
            std::cout << S.uniquePaths(j, i) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << S.uniquePaths(2, 3) << std::endl;
    std::cout << S.uniquePaths(3, 7) << std::endl;
    std::cout << S.uniquePaths(51, 9) << std::endl;
    return 0;
}
