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
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        while (root != nullptr) {
            if (root->val > p->val && root->val > q->val)
                root = root->left;    // q和p的值均大于当前根节点，以左子节点为根，在左子树上寻找
            else if (root->val < p->val && root->val < q->val)
                root = root->right; // q和p的值均大于当前根节点，以右子节点为根，在右子树上寻找
            else return root;
        }
        return nullptr;
    }
};

#endif //INC_235_SOLUTION_HPP
