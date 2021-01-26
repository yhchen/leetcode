//
// Created by langrensha0016 on 2021/1/26.
//

#ifndef INC_1128_SOLUTION_HPP
#define INC_1128_SOLUTION_HPP

// https://leetcode-cn.com/problems/number-of-equivalent-domino-pairs/

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int exist[100] = {0};
        int count = 0;
        for (const auto& v: dominoes) {
            int v1 = v[0]*10+v[1];
            int v2 = v[0]+v[1]*10;
            count += exist[v1];
            exist[v1] = ++exist[v2];
        }
        return count;
    }
};

#endif //INC_1128_SOLUTION_HPP
