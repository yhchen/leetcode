#ifndef INC_237_SOLUTION_HPP
#define INC_237_SOLUTION_HPP

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode *node) {
        *node = *(node->next);
    }
};

#endif //INC_237_SOLUTION_HPP
