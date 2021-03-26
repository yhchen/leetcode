//
// Created by langrensha0016 on 2021/3/25.
//

#ifndef INC_82_SOLUTION_HPP
#define INC_82_SOLUTION_HPP

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == 0) return head;
        ListNode *newHead = new ListNode(), *tmpHead = newHead, *nextNode;
        newHead->next = head;
        int lastVal = head->val - 1;
        while (tmpHead->next) {
            nextNode = tmpHead->next;
            if (nextNode->val == lastVal) {
                // remove next
                tmpHead->next = nextNode->next;
                continue;
            } else if (nextNode->next != 0 && nextNode->val == nextNode->next->val) {
                // remove next
                tmpHead->next = nextNode->next;
                lastVal = nextNode->val;
                continue;
            }
            // skip
            tmpHead = tmpHead->next;
            lastVal = tmpHead->val;
        }
        return newHead->next;
    }
};

#endif //INC_82_SOLUTION_HPP
