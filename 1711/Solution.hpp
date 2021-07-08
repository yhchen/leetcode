#ifndef __SOLUTION_HPP__
#define __SOLUTION_HPP__

#include <vector>
#include <unordered_map>

class Solution {
public:
    int countPairs(std::vector<int> &deliciousness) {
        static constexpr unsigned long long MOD = 1'000'000'007;
        int maxVal = 0;
        unsigned long long pairs = 0;
        for (auto v: deliciousness) {
            maxVal = std::max(maxVal, v);
        }
        int maxSum = maxVal << 1;

        unordered_map<int, int> mp;
        for (auto &val: deliciousness) {
            for (int sum = 1; sum <= maxSum; sum <<= 1) {
                int count = mp.count(sum - val) ? mp[sum - val] : 0;
                pairs += count;
            }
            mp[val]++;
        }

        return pairs % MOD;
    }
};

#endif // __SOLUTION_HPP__
