#ifndef _SOLUTION_HPP_
#define _SOLUTION_HPP_

void moveZeroes(int *nums, int numsSize) {
    if (numsSize <= 0 || nums == ((void*)0)) return;
    int moveIndex = 0;
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] != 0) {
            nums[moveIndex++] = nums[i];
        }
    }
    if (moveIndex < numsSize) {
        memset(nums + moveIndex, 0, (numsSize - moveIndex) * sizeof(typeof(nums[0])));
    }
}

#endif