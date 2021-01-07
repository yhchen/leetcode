//
// Created by langrensha0016 on 2021/1/7.
//

#ifndef INC_547_SOLUTION_HPP
#define INC_547_SOLUTION_HPP

#include <vector>

using namespace std;

class Solution {
public:
    int findCircleNum(const vector<vector<int>> &isConnected) {
        int count = isConnected.size();
        if (count <= 1) return count;
        int group = 0;
        bool *visited = new bool[count]{false};
        for (int i = 0; i < count; ++i) {
            if (visited[i]) continue;
            ++group;
            // 递归查找所有的关联
            this->dfs(visited, isConnected, count, i);
        }
        delete[]visited;
        return group;
    }

private:
    void dfs(bool *visited, const vector<vector<int>> &isConnected, int count, int i) {
        if (visited[i]) return;
        visited[i] = true;
        for (int j = 0; j < count; ++j) {
            if (isConnected[i][j]) {
                dfs(visited, isConnected, count, j);
            }
        }
    }
};


//#include <vector>
//#include <unordered_set>
//
//using namespace std;
//
//class Solution {
//public:
//    int findCircleNum(vector<vector<int>>& isConnected) {
//        if (isConnected.size() <= 0 || isConnected[0].size() <= 0) {
//            return 0;
//        }
//        unordered_set<int> us;
//        int current = 2;
//        const int is = isConnected.size(), js = isConnected[0].size();
//        for (int i = 0; i < is; ++i) {
//            for (int j = 0; j < js; ++j) {
//                int& rValue = isConnected[i][j];
//                if (rValue == 0) {
//                    continue;
//                }
//                bool conn = false;
//                if (i > 0) {
//                    int up = isConnected[i-1][j];
//                    if (up != 0) {
//                        rValue = up;
//                        conn = true;
//                    }
//                }
//                if (j > 0) {
//                    int left = isConnected[i][j-1];
//                    if (left != 0 && left != rValue) {
//                        if (conn) {
//                            // merge
//                            // std::cout << "remove " << left << "at:" << i << ", " << j << std::endl;
//                            us.erase(left);
//                        } else {
//                            rValue = left;
//                        }
//                        conn = true;
//                    }
//                }
//                if (!conn) {
//                    // found new land
//                    rValue = current++;
//                    us.insert(rValue);
//                }
//            }
//        }
//        for (const auto& vv: isConnected) {
//            for (auto v: vv) {
//                std::cout << v << ",";
//            }
//            std::cout << std::endl;
//        }
//        return (int)us.size();
//    }
//};

#endif //INC_547_SOLUTION_HPP
