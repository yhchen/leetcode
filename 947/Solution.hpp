//
// Created by langrensha0016 on 2021/1/18.
//

#ifndef INC_947_SOLUTION_HPP
#define INC_947_SOLUTION_HPP

#include <vector>
#include <unordered_map>

using namespace std;

// https://leetcode-cn.com/problems/most-stones-removed-with-same-row-or-column/solution/tu-jie-bing-cha-ji-by-yexiso-nbcz/

class Djset {
public:
    unordered_map<int, int> parent, rank;  // 记录节点的根
    int count;

    Djset(int n) : count(0) {}

    int find(int x) {
        // 添加了一个新的集合，count+1
        if (parent.find(x) == parent.end()) {
            parent[x] = x;
            count++;
        }
        // 压缩方式：直接指向根节点
        if (x != parent[x]) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void merge(int x, int y) {
        int rootx = find(x);
        int rooty = find(y);
        if (rootx != rooty) {
            if (rank[rootx] < rank[rooty]) {
                swap(rootx, rooty);
            }
            parent[rooty] = rootx;
            if (rank[rootx] == rank[rooty]) rank[rootx] += 1;
            count--;
        }
    }

    int get_count() {
        return count;
    }
};

class Solution {
public:
    int removeStones(vector<vector<int>> &stones) {
        int n = stones.size();
        Djset ds(n);
        for (auto &e : stones) {
            ds.merge(e[0] + 10001, e[1]);
        }
        return n - ds.get_count();
    }
};

#endif //INC_947_SOLUTION_HPP
