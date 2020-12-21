//
// Created by langrensha0016 on 2020/12/18.
//

#ifndef INC_136_SOLUTION_HPP
#define INC_136_SOLUTION_HPP

/**
 * 异或的方法获取不配对的那个数字
 * @param nums
 * @param numsSize
 * @return
 */
int singleNumber(int* nums, int numsSize){
    int result = 0;
    while (numsSize--) {
        result ^= nums[numsSize];
    }
    return result;
}

#endif //INC_136_SOLUTION_HPP
