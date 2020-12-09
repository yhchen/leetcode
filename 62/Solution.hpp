//
// Created by mysel on 12/9/2020.
//

#ifndef INC_62_SOLUTION_HPP
#define INC_62_SOLUTION_HPP

int scout(int x, int y, int m, int n) {
    if (x >= m || y >= n) {
        return 1;
    }
    return scout(x + 1, y, m, n) + scout(x, y + 1, m, n);
}

int uniquePaths(int m, int n) {
    return scout(1, 1, m, n);
}

#endif //INC_62_SOLUTION_HPP
