//
// Created by langrensha0016 on 2021/1/14.
//

#ifndef INC_1018_SOLUTION_HPP
#define INC_1018_SOLUTION_HPP

#include <vector>

using namespace std;

//class Solution {
//public:
//    vector<bool> prefixesDivBy5(vector<int>& A) {
//        vector<bool> result;
//        int tmpval = 0;
//        for (const auto& v: A) {
//            tmpval = ((tmpval << 1) + v) % 5;
//            result.push_back(tmpval == 0);
//        }
//        return result;
//    }
//};


class Solution {
public:
    vector<bool> prefixesDivBy5(std::vector<int> A) {
        vector<bool> res;
        if (A.size() < 1) return res;
        const static int StateSet[5][2] = {
                {0, 1},
                {2, 3},
                {4, 0},
                {1, 2},
                {3, 4}
        };
        int state = 0;
        for (int i = 0; i < A.size(); i++) {
            state = StateSet[state][A[i]];  //转换后的状态
            res.push_back(state == 0);
        }
        return res;
    }
};

#endif //INC_1018_SOLUTION_HPP
