//
// Created by mysel on 12/9/2020.
//

#ifndef INC_62_SOLUTION_HPP
#define INC_62_SOLUTION_HPP

#include <vector>

class Solution {
public:
    int uniquePaths(int m, int n) {
        std::vector<std::vector<int> > matrix(m, std::vector<int>(n));

        for (int i = 0; i < m; ++i) {
            matrix[i][0] = 1;
        }
        for (int j = 0; j < n; ++j) {
            matrix[0][j] = 1;
        }
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                matrix[i][j] = matrix[i - 1][j] + matrix[i][j - 1];
            }
        }

        return matrix[m - 1][n - 1];
    }
};

#endif //INC_62_SOLUTION_HPP
