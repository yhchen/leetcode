//
// Created by langrensha0016 on 2021/1/11.
//

#ifndef INC_1202_SOLUTION_HPP
#define INC_1202_SOLUTION_HPP

#include <string>
#include <vector>
#include <unordered_map>

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

using namespace std;

class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>> &pairs) {
        this->makeNewMap(pairs);
        // sort groups
        for (auto&[k, rV]: this->_mvGroupIndexes) {
            vector<char> tmpVec;
            for (auto &i: rV) {
                tmpVec.push_back(s[i]);
            }
            sort(tmpVec.begin(), tmpVec.end(), greater<char>());
            sort(rV.begin(), rV.end(), greater<int>());

//            // debug
//            std::cout << k << ": ";
//            for (auto i: rV) {
//                std::cout << i << "(" << s[i] << ")" << ", ";
//            }
//            std::cout << std::endl;
//            // debug

            for (int i = 0; i < tmpVec.size(); ++i) {
                s[rV[i]] = tmpVec[i];
            }
        }
        return s;
    }

private:
    void makeNewMap(const vector<vector<int>> &pairs) {
        // clear
        this->_mvGroupIndexes.clear();
        this->_mIndexGroup.clear();
        this->_nGroup = 0;
        // make indexes
        for (const auto &vc: pairs) {
            int i1 = vc[0], i2 = vc[1];
            if (i1 == i2) continue;
            int g1 = this->_mIndexGroup[i1], g2 = this->_mIndexGroup[i2];
            if (g1 != 0 && g2 != 0) {
                if (g1 != g2) {
                    // merge g2 -> g1
                    auto &rvg1 = this->_mvGroupIndexes[g1];
                    auto &rvg2 = this->_mvGroupIndexes[g2];
                    for (int idx: rvg2) {
                        this->_mIndexGroup[idx] = g1;
                        rvg1.push_back(idx);
                    }
                    this->_mvGroupIndexes.erase(g2);
                }
            } else if (g1 != 0 || g2 != 0) {
                // add i1(or i2) to g2(or g1)
                if (g1 != 0) {
                    this->_mIndexGroup[i2] = g1;
                    this->_mvGroupIndexes[g1].push_back(i2);
                } else {
                    this->_mIndexGroup[i1] = g2;
                    this->_mvGroupIndexes[g2].push_back(i1);
                }
            } else {
                // add new group
                int newGroup = ++this->_nGroup;
                this->_mIndexGroup[i1] = this->_mIndexGroup[i2] = newGroup;
                this->_mvGroupIndexes.insert(make_pair(newGroup, std::vector<int>({i1, i2})));
            }
        }
    }

    unordered_map<int, int> _mIndexGroup;
    int _nGroup = 0;
    unordered_map<int, vector<int>> _mvGroupIndexes;
};

#endif //INC_1202_SOLUTION_HPP
