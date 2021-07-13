//
// Created by langrensha0016 on 2021/7/9.
//

#ifndef INC_17_10_FIND_MAJORITY_ELEMENT_LCCI_SOLUTION_HPP
#define INC_17_10_FIND_MAJORITY_ELEMENT_LCCI_SOLUTION_HPP

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = -1;
        int count = 0;
        for (int& num : nums) {
            if (count == 0) {
                candidate = num;
            }
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        count = 0;
        int length = nums.size();
        for (int& num : nums) {
            if (num == candidate) {
                count++;
            }
        }
        return count * 2 > length ? candidate : -1;
    }
};

#endif //INC_17_10_FIND_MAJORITY_ELEMENT_LCCI_SOLUTION_HPP
