//
// Created by langrensha0016 on 2021/1/18.
//

#ifndef INC_947_SOLUTION_HPP
#define INC_947_SOLUTION_HPP

#include <vector>

using namespace std;

class Solution {
private:
    int n = 20005; // 根据坐标范围而定
    int father[20005];

    // 并查集初始化
    void init() {
        for (int i = 0; i < n; ++i) {
            father[i] = i;
        }
    }
    // 并查集里寻根的过程
    int find(int u) {
        return u == father[u] ? u : father[u] = find(father[u]);
    }
    // 将v->u 这条边加入并查集
    void join(int u, int v) {
        u = find(u);
        v = find(v);
        if (u == v) return ;
        father[v] = u;
    }
    // 判断 u 和 v是否找到同一个根
    bool same(int u, int v) {
        u = find(u);
        v = find(v);
        return u == v;
    }
public:
    int removeStones(vector<vector<int>>& stones) {
        init();
        for (int i = 0; i < stones.size(); i++) join(stones[i][0], stones[i][1] + 10000);
        unordered_map<int, bool> umap;
        for (int i = 0; i < stones.size(); i++) {
            umap[find(stones[i][0])] = true;
            umap[find(stones[i][1] + 10000)] = true;
        }
        return stones.size() - umap.size();
    }
};

#endif //INC_947_SOLUTION_HPP
