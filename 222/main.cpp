#include <iostream>
#include <vector>

struct TreeNode {
public:
    TreeNode() {
        left = right = 0;
    }

    TreeNode *left;
    TreeNode *right;
};

#include "Solution.hpp"

void MakeTreeInner(int leftCount, const std::vector<TreeNode *> &v) {
    std::vector<TreeNode *> vv;
    for (const auto node: v) {
        if (leftCount <= 0) break;
        --leftCount;
        node->left = new TreeNode();
        vv.push_back(node->left);
        if (leftCount <= 0) break;
        --leftCount;
        node->right = new TreeNode();
        vv.push_back(node->right);
    }
    if (leftCount > 0) {
        MakeTreeInner(leftCount, vv);
    }
}

TreeNode *MakeTree(int count) {
    if (count <= 0) return 0;
    TreeNode *root = new TreeNode();
    std::vector<TreeNode *> v;
    v.push_back(root);
    MakeTreeInner(count - 1, v);
    return root;
}

int main() {
    TreeNode *node = MakeTree(13);

    std::cout << countNodes(node) << std::endl;
    return 0;
}
