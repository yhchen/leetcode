//
// Created by langrensha0016 on 2020/12/25.
//

#ifndef INC_455_SOLUTION_HPP
#define INC_455_SOLUTION_HPP

#include <algorithm>
#include <functional>
#include <vector>

class Solution {
public:
    int findContentChildren(std::vector<int> &g, std::vector<int> &s) {
        std::sort(g.begin(), g.end(), std::greater<int>());
        std::sort(s.begin(), s.end(), std::greater<int>());
        int is = 0, ig = 0;
        while (is < s.size() && ig < g.size()) {
            if (s[is] >= g[ig++]) {
                ++is;
            }
        }
        return is;
    }
};

#endif //INC_455_SOLUTION_HPP
