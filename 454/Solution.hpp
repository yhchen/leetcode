//
// Created by mysel on 2020/11/27.
//

#ifndef INC_454_SOLUTION_HPP
#define INC_454_SOLUTION_HPP

class Solution {
public:
    int fourSumCount(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D) {
        unordered_map<int, int> AB;
        int ret = 0;
        for (auto a: A) {
            for (auto b: B) {
                ++AB[a + b];
            }
        }

        for (auto c: C) {
            for (auto d: D) {
                int res = -(c + d);
                auto iter = AB.find(res);
                if (iter != AB.end()) {
                    ret += iter->second;
                }
            }
        }

        return ret;
    }
};

#endif //INC_454_SOLUTION_HPP
