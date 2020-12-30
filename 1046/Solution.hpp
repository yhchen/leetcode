//
// Created by langrensha0016 on 2020/12/30.
//

#ifndef INC_1046_SOLUTION_HPP
#define INC_1046_SOLUTION_HPP

#include <vector>

using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if (stones.size() <= 0) return 0;
        std::sort(stones.begin(), stones.end(), std::less<int>());
        while (stones.size() > 1) {
            int size = (int)stones.size();
            stones[size-2] = stones[size-1] - stones[size-2];
            stones.resize(size-1);
            std::sort(stones.begin(), stones.end(), std::less<int>());
        }
        return stones[0];
    }
};

#endif //INC_1046_SOLUTION_HPP
