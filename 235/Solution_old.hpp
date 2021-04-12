#ifndef INC_235_SOLUTION_HPP
#define INC_235_SOLUTION_HPP

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        std::vector<TreeNode*> pPath;
        std::vector<TreeNode*> qPath;
        findpath(root, p, pPath);
        findpath(root, q, qPath);
        // for (auto i: pPath) std::cout << i->val << ",";
        // std::cout << std::endl;
        // for (auto i: qPath) std::cout << i->val << ",";
        // std::cout << std::endl;
        int len = min(pPath.size(), qPath.size()) - 1;
        for (int i = len; i > 0; --i) {
            if (pPath[i] == qPath[i]) return pPath[i];
        }
        return pPath[0];
    }

    bool findpath(TreeNode* root, TreeNode* node, std::vector<TreeNode*>& rVec)
    {
        if (root == 0) return false;
        if (root == node)
        {
            rVec.push_back(node);
            return true;
        }
        rVec.push_back(root);
        if (findpath(root->left, node, rVec)) return true;
        if (findpath(root->right, node, rVec)) return true;
        rVec.pop_back();
        return false;
    }
};

#endif //INC_235_SOLUTION_HPP
