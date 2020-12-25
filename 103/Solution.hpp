//
// Created by langrensha0016 on 2020/12/22.
//

#ifndef INC_103_SOLUTION_HPP
#define INC_103_SOLUTION_HPP

#include <vector>
#include <queue>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        vector<vector<int> > vvresult;
        queue<TreeNode *> queNodes[2];
        queue<TreeNode *> *queHandling = &queNodes[0], *queHandler = &queNodes[1];
        bool isLeft = true;
        queHandler->push(root);
        vvresult.push_back(vector<int>(root->val));
        while (!queHandler->empty()) {
            std::vector<int> v;
            auto node = queHandler->front();
            queHandler->pop();
            vvresult.push_back(v);
        }

        return vvresult;
    }
};

#endif //INC_103_SOLUTION_HPP
