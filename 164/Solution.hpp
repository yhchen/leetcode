//
// Created by mysel on 2020/11/26.
//

#ifndef INC_164_SOLUTION_HPP
#define INC_164_SOLUTION_HPP

#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(const int *) a - *(const int *) b;
}

int maximumGap(int *nums, int numsSize) {
    if (numsSize <= 1 || nums == 0) return 0;
    qsort(nums, numsSize, sizeof(nums[0]), &compare);
    int max = 0;
    for (int i = 1; i < numsSize; ++i) {
        int v = nums[i] - nums[i - 1];
        if (v > max) max = v;
    }
    return max;
}

#endif //INC_164_SOLUTION_HPP
