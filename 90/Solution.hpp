//
// Created by langrensha0016 on 2021/3/31.
//

#ifndef INC_90_SOLUTION_HPP
#define INC_90_SOLUTION_HPP

class Solution {
public:
    std::vector <std::vector<int>> subsetsWithDup(std::vector<int> &nums) {
        std::vector <std::vector<int>> sub;
        std::unordered_map<int, int> sub_map;
        std::vector <std::pair<int, int>> vecGroups;
        for (auto v: nums) {
            ++sub_map[v];
        }
        for (auto iter: sub_map) {
            vecGroups.push_back(iter);
        }

        makeSub(sub, vecGroups, 0);

        return sub;
    }

private:
    void makeSub(std::vector <std::vector<int>> &sub, std::vector <std::pair<int, int>> &vecGroups, int index) {
        if (index >= vecGroups.size()) {
            sub.push_back(_data);
            return;
        }
        auto &kv = vecGroups[index];
        int len = _data.size();
        makeSub(sub, vecGroups, index + 1);
        _data.resize(len);
        for (int i = kv.second; i > 0; --i) {
            _data.push_back(kv.first);
            int len = _data.size();
            makeSub(sub, vecGroups, index + 1);
            _data.resize(len);
        }
    }

    std::vector<int> _data;
};

#endif //INC_90_SOLUTION_HPP
