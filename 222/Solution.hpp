//
// Created by mysel on 2020/11/24.
//

#ifndef INC_222_SOLUTION_HPP
#define INC_222_SOLUTION_HPP

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int calcDeepRight(struct TreeNode* root) {
    int deep = 0;
    while (root) {
        ++deep;
        root = root->right;
    }
    return deep;
}

int calcDeepLeft(struct TreeNode* root) {
    int deep = 0;
    while (root) {
        ++deep;
        root = root->left;
    }
    return deep;
}

int calcLastLayerCount(struct TreeNode* root, int leftDeep, int rightDeep) {
    int leftNode = 0;
    int rightNode = 1 << leftDeep - 1;
    int mid = (leftNode + rightNode) / 2;
    int mod = 1 << rightDeep;
    while (leftNode < rightNode) {
        struct TreeNode* node = root;
        int tmp = mod;
        while (tmp > 0) {
            node = mid & tmp ? node->right: node->left;
            tmp = (tmp >> 1);
        }
        if (node) leftNode = mid;
        else rightNode = mid;
        mid = (leftNode + rightNode) / 2;
    }
    return (2 << leftDeep) - rightNode;
}

int countNodes(struct TreeNode* root) {
    int leftDeep = calcDeepLeft(root);
    int rightDeep = calcDeepRight(root);
    if (leftDeep == rightDeep) {
        return (2 << leftDeep) - 1;
    }
    return calcLastLayerCount(root, leftDeep, rightDeep);
}

#endif //INC_222_SOLUTION_HPP
