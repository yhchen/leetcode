//
// Created by langrensha0016 on 2021/1/14.
//

#ifndef INC_1018_SOLUTION_HPP
#define INC_1018_SOLUTION_HPP

#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> result;
        int tmpval = 0;
        for (const auto& v: A) {
            tmpval = ((tmpval << 1) + v) % 5;
            result.push_back(tmpval == 0);
        }
        return result;
    }
};


#endif //INC_1018_SOLUTION_HPP
