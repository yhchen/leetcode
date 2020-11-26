//
// Created by mysel on 2020/11/25.
//

#ifndef INC_24_SOLUTION_HPP
#define INC_24_SOLUTION_HPP

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdlib.h>

struct ListNode* swapPairs(struct ListNode* head){
    if (!head || !head->next) return head;
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->next = head;
    head = head->next;
    struct ListNode* n, *nn;
    while (node->next && node->next->next) {
        n = node->next;
        nn = n->next;
        node->next = nn;
        n->next = nn->next;
        nn->next = n;
        node = n;
    }
    return head;
}

#endif //INC_24_SOLUTION_HPP
