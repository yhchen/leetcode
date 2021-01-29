//
// Created by yhchen on 2021/1/28.
//

#ifndef INC_1579_SOLUTION_HPP
#define INC_1579_SOLUTION_HPP

#include <vector>
#include <assert.h>

using namespace std;


class DJset {
public:
    DJset(int n) : _rootCount(n), _parent(vector<int>(n + 1)), _rank(vector<int>(n + 1)) {}

    DJset(const DJset &other) : _rootCount(other._rootCount), _parent(other._parent), _rank(other._rank) {}

    int find(int x) {
        auto &rp = _parent[x];
        return rp == 0 ? x : rp = find(rp);
    }

    bool join(int x, int y) {
        auto rootx = find(x);
        auto rooty = find(y);
        if (rootx == rooty) return false;
        // always min point to max
        if (_rank[rootx] < _rank[rooty]) {
            swap(rootx, rooty);
        } else if (_rank[rootx] == _rank[rooty]) {
            ++_rank[rootx];
        }
        _parent[rooty] = rootx;
        --_rootCount;
        return true;
    }

    inline int rootCount() const { return _rootCount; }

    inline bool isUnion() const { return _rootCount == 1; } // zero and another tree

private:
    vector<int> _parent, _rank;
    int _rootCount;
};

class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>> &edges) {
        if ((edges.size() + 1) < n) return -1;
        DJset ds1(n);
        int removeCount = 0;
        for (const auto &v: edges) {
            if (v[0] == 3) {
                if (!ds1.join(v[1], v[2])) {
                    ++removeCount;
                }
            }
        }
        DJset ds2(ds1);
        for (const auto &v: edges) {
            switch (v[0]) {
                case 1:
                    if (!ds1.join(v[1], v[2])) {
                        ++removeCount;
                    }
                    break;
                case 2:
                    if (!ds2.join(v[1], v[2])) {
                        ++removeCount;
                    }
                    break;
            }
        }

        if (!ds1.isUnion() || !ds2.isUnion()) return -1;
        return removeCount;
    }
};

#endif //INC_1579_SOLUTION_HPP
