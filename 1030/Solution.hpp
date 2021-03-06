//
// Created by mysel on 2020/11/17.
//

#ifndef INC_1030_SOLUTION_HPP
#define INC_1030_SOLUTION_HPP

#include <vector>

using namespace std;

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) > (b) ? (b) : (a))

#define addval(i, v, r, c) if (!_add_flag[r][c]) { v[i++] = {r, c}; _add_flag[r][c] = true; }

class Solution {
public:
    vector<vector<int> > allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<vector<int> > vv;
        vv.resize(R * C);
        memset(_add_flag, 0, sizeof(_add_flag));
        int index = 0;
        addval(index, vv, r0, c0);
        const auto bR = max(r0, R - r0 - 1), bC = max(c0, C - c0 - 1), bDistance = bR + bC;
        for (int distance = 1; distance <= bDistance; ++distance) {
            for (int r1 = 0; r1 <= distance; ++r1) {
                int c1 = distance - r1;
                if (r1 <= r0 && c1 <= c0) {
                    addval(index, vv, r0 - r1, c0 - c1);
                }
                if (r1 + r0 < R && c1 <= c0) {
                    addval(index, vv, r0 + r1, c0 - c1);
                }
                if (r1 <= r0 && c1 + c0 < C) {
                    addval(index, vv, r0 - r1, c0 + c1);
                }
                if (r1 + r0 < R && c1 + c0 < C) {
                    addval(index, vv, r0 + r1, c0 + c1);
                }
            }
        }

        return vv;
    }

private:
    bool _add_flag[100][100];
};


#endif //INC_1030_SOLUTION_HPP
