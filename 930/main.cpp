#include <iostream>
#include <vector>
#include "Solution.hpp"

int main() {
    Solution solution;
    std::cout << solution.numSubarraysWithSum(std::vector<int>{1,0,1,0,1}, 0) << std::endl;
    std::cout << solution.numSubarraysWithSum(std::vector<int>{0,1,0,1,0}, 0) << std::endl;
    std::cout << solution.numSubarraysWithSum(std::vector<int>{0,1,0,0,0,0}, 0) << std::endl;
    std::cout << solution.numSubarraysWithSum(std::vector<int>{0,0,0,0,0,0}, 0) << std::endl;
    std::cout << solution.numSubarraysWithSum(std::vector<int>{1,1,1,1,1,1}, 0) << std::endl;

    std::cout << solution.numSubarraysWithSum(std::vector<int>{1,0,1,0,1,0,1,0,1,0,1}, 1) << std::endl;
    std::cout << solution.numSubarraysWithSum(std::vector<int>{1,0,1,0,1,0,1,0,1,0,1}, 2) << std::endl;
    std::cout << solution.numSubarraysWithSum(std::vector<int>{1,0,1,0,1,0,1,0,1,0,1}, 3) << std::endl;
    std::cout << solution.numSubarraysWithSum(std::vector<int>{1,0,1,0,1,0,1,0,1,0,1}, 4) << std::endl;
    return 0;
}
