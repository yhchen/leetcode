//
// Created by langrensha0016 on 2021/7/8.
//

#ifndef INC_930_SOLUTION_HPP
#define INC_930_SOLUTION_HPP

#include <vector>

class Solution {
public:
    int numSubarraysWithSum(const std::vector<int> &nums, int goal) {
        if (goal > nums.size()) return 0;

        int result = 0;
//        if (goal == 0) {
//            int index = 0;
//            while (nums[index++] && index < nums.size());
//            --index;
//            int zero = 0;
//            result = zero;
//            while (index < nums.size()) {
//                if (nums[index++]) zero = 0;
//                else result += ++zero;
//            }
//            return result;
//        }

        const int queue_size = goal + 1; //
        int *p_queue = new int[queue_size]{0};
        int queue_idx = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]) { // is one
                ++p_queue[queue_idx];
                queue_idx = (queue_idx + 1) % queue_size;
                p_queue[queue_idx] = 0;
            } else { // is zero
                ++p_queue[queue_idx];
            }
            int last_index = (queue_size + queue_idx - goal) % queue_size;
            result += p_queue[last_index];
//                std::cout << nums[i] << ":[";
//                for (int j = 0; j < queue_size; ++j) std::cout << (j == 0 ? "" : ",") << p_queue[j];
//                std::cout << "]" << std::endl;
        }
        delete[] p_queue;

        return result;
    }
};

#endif //INC_930_SOLUTION_HPP
