//
// Created by langrensha0016 on 2021/1/28.
//

#ifndef INC_724_SOLUTION_HPP
#define INC_724_SOLUTION_HPP

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int num = 0;
        for (auto n: nums) {
            num += n;
        }
        int current = 0, last = 0;
        for (int i = 0; i < nums.size(); ++i) {
            num -= last;
            auto n = last = nums[i];
            current += n;
            if (current == num) {
                return i;
            }
        }
        return -1;
    }
};

#endif //INC_724_SOLUTION_HPP
