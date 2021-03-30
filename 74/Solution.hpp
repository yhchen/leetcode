//
// Created by langrensha0016 on 2021/3/30.
//

#ifndef INC_74_SOLUTION_HPP
#define INC_74_SOLUTION_HPP

//class Solution {
//public:
//    bool searchMatrix(std::vector<std::vector<int>> &matrix, int target) {
//        int mcol = matrix.size();
//        if (mcol < 0) return false;
//        int mrow = matrix[0].size();
//        if (mrow < 0) return false;
//        int len = mcol * mrow, mid = len / 2, left = 0, right = len - 1;
//        while (mid >= left && mid <= right) {
//            int col = mid % mrow, row = mid / mcol, v = matrix[col][row];
//            printf("col: %d, row: %d, v: %d\n", col, row, v);
//            if (v == target) return true;
//            else if (v > target) right = mid - 1;
//            else left = mid + 1;
//        }
//        return false;
//    }
//};

class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>> &matrix, int target) {
        int mcol = matrix.size();
        if (mcol < 0) return false;
        int mrow = matrix[0].size();
        if (mrow < 0) return false;
        int len = mcol * mrow, mid = len / 2, left = 0, right = len - 1;
        // printf("=================\n");
        while (mid >= left && mid <= right) {
            int col = mid % mrow, row = mid / mrow, v = matrix[row][col];
            // printf("mid: %d, col: %d, row: %d, v: %d\n", mid, col, row, v);
            if (v == target) return true;
            else if (v > target) right = mid - 1;
            else left = mid + 1;
            mid = (left + right) / 2;
        }
        return false;
    }
};

#endif //INC_74_SOLUTION_HPP
