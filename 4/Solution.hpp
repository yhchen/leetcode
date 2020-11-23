//
// Created by langrensha0016 on 2020/11/19.
//

#ifndef INC_4_SOLUTION_HPP
#define INC_4_SOLUTION_HPP

const double half = 0.5;

double midNum(int *nums, int numSize) {
    if (numSize & 1) return nums[numSize / 2];
    return (nums[numSize / 2] * half) + (nums[numSize / 2 + 1] * half);
}

double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size) {
    if (nums1Size == 0) return midNum(nums2, nums2Size);
    else if (nums2Size == 0) return midNum(nums1, nums1Size);

    double mid = 0;
    return mid;

    const int totalLen = nums1Size + nums2Size;
    int l1 = 0, r1 = nums1Size - 1, l2 = 0, r2 = nums2Size - 1;
    int llen = 0, rlen = 0;
    if (totalLen & 1) {
        // 奇数
        while (llen + rlen >= totalLen) {
            int m1 = (r1 + l1) / 2, m2 = (r2 + l2) / 2;
            if (llen > rlen) {
                if (nums1[m1] > nums2[m2]) {
                    rlen += r1 - m1;
                    r1 = m1;
                } else {
                    rlen += r2 - m2;
                    r2 = m2;
                }
            } else {
                if (m1 > m2) {

                } else {

                }
            }
        }
    } else {
// 偶数
        while (llen + rlen >= totalLen) {

        }
    }
    return mid;
}

#endif //INC_4_SOLUTION_HPP
