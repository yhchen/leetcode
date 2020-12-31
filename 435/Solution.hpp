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
            if (a[0] != b[0]) return a[0] - b[0];
            return a[1] - b[1];
        });
        for (auto vve: intervals) {
            std::cout << vve[0] << ", " << vve[1] << std::endl;
        }
        vector<int>* vv = &intervals[0];
        int result =0;
        const int size = (int)intervals.size();
        for (int i = 1; i < size; ++i) {
            if (!inRange(*vv, intervals[i])) {
                vv = &intervals[i];
                break;
            }
            ++result;
        }
        return result;
    }

private:
    bool inRange(const vector<int>& a, const vector<int>& b) {
        return a[0] < b[1] && a[1] > b[0];
    }
};

#endif //INC_435_SOLUTION_HPP
