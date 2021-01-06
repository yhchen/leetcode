//
// Created by langrensha0016 on 2021/1/6.
//

#ifndef INC_830_SOLUTION_HPP
#define INC_830_SOLUTION_HPP

#define SUIT_LEN 3

class Solution {
public:
    vector<vector<int>> largeGroupPositions(const string& s) {
        vector<vector<int>> vv;
        if (s.size() < 3) return vv;
        char c = s[0];
        int start = 0;
        for (int i = 1; i <= s.size(); ++i) {
            if (s[i] != c) {
                if (i - start >= SUIT_LEN) {
                    vv.push_back(std::vector<int>({start, i - 1}));
                }
                start = i;
                c = s[i];
            }
        }

        return vv;
    }
};

#endif //INC_830_SOLUTION_HPP
