//
// Created by langrensha0016 on 2021/1/11.
//

#ifndef INC_1202_SOLUTION_HPP
#define INC_1202_SOLUTION_HPP

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class DJSet {
public:
    DJSet(int n) : _parent(std::vector<int>(n)), _rank(std::vector<int>(n)) {
        for (int i = 0; i < n; ++i) _parent[i] = i; // init to self
    }

    int find(int x) {
        int &rParent = _parent[x];
        return rParent == x ? x : rParent = find(rParent);
    }

    void merge(int x, int y) {
        int rootx = find(x);
        int rooty = find(y);
        if (rootx == rooty) return;
        if (_rank[rootx] < _rank[rooty]) {
            swap(rootx, rooty);
        }
        _parent[rooty] = rootx;
        if (_rank[rootx] == _rank[rooty]) ++_rank[rootx];
    }

private:
    std::vector<int> _parent, _rank;
};


/*
"dcab"
[[0,3],[1,2]]
"dcab"
[[0,3],[1,2],[0,2]]
"qdwyt"
[[2,3],[3,2],[0,1],[4,0],[3,2]]
"udyyek"
[[3,3],[3,0],[5,1],[3,1],[3,4],[3,5]]
*/

class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>> &pairs) {
        int sz = (int) s.size();
        DJSet ds(sz);

        // make indexes
        for (const auto &vc: pairs) {
            int i1 = vc[0], i2 = vc[1];
            if (i1 == i2) continue; // point to self
            ds.merge(i1, i2);
        }
        // make group
        std::unordered_map<int, vector<char>> groups;
        for (int i = sz - 1; i > -1; --i) {
            groups[ds.find(i)].emplace_back(s[i]);
        }
        for (auto&[k, v]: groups) {
            std::sort(v.begin(), v.end(), greater<char>());
        }
        for (int i = 0; i < sz; ++i) {
            auto &v = groups[ds.find(i)];
            s[i] = v.back();
            v.pop_back();
        }
        return s;
    }
};

#endif //INC_1202_SOLUTION_HPP
