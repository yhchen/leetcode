//
// Created by langrensha0016 on 2020/12/31.
//

#ifndef INC_435_SOLUTION_HPP
#define INC_435_SOLUTION_HPP

#include <vector>

using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals) {
        if (intervals.size() <= 1) return 0;
        std::sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int> &b) -> bool {
            return a[1] < b[1];
        });
        int end = intervals[0][1];
        int result = 0;
        const int size = (int) intervals.size();
        for (int i = 1; i < size; ++i) {
            if (intervals[i][0] >= end) {
                end = intervals[i][1];
//                std::cout << "end: " << end << std::endl;
            }
            else ++result;
        }
        return result;
    }
};

#endif //INC_435_SOLUTION_HPP