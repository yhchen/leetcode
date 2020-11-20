//
// Created by mysel on 2020/11/20.
//

#ifndef INC_147_SOLUTION_HPP
#define INC_147_SOLUTION_HPP

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//struct ListNode *insertionSortList(struct ListNode *head) {
//    if (!head) return head;
//    struct ListNode* cursor = head->next;
//    struct ListNode* cursorPrev = head;
//    while (cursor) {
//        struct ListNode *prev = 0;
//        struct ListNode* ptr = head;
//        while (true) {
//            if (ptr == cursor) {
//                // 当前最大，向后移动游标
//                cursorPrev = cursor;
//                cursor = cursor->next;
//                break;
//            }
//
//            if (ptr->val > cursor->val) {
//                struct ListNode* cursorNext = cursor->next;
//                if (!prev) {
//                    // is header
//                    cursorPrev->next = cursorNext;
//                    cursor->next = head;
//                    head = cursor;
//                    cursor = cursorNext;
//                } else {
//                    // move to
//                    struct ListNode* prevNext = prev->next;
//                    prev->next = cursor;
//                    cursor->next = prevNext;
//                    cursorPrev->next = cursorNext;
//                    cursor = cursorNext;
//                }
//                break;
//            }
//
//            prev = ptr;
//            ptr = ptr->next;
//        }
//    }
//    return head;
//}

int cmp(const void *a, const void *b) {
    return ((*(int *) a) - (*(int *) b));
}

typedef struct ListNode Node;

struct ListNode *insertionSortList(struct ListNode *head) {
    Node *cur = head;
    int len = 0;
    while (cur) {
        len++;
        cur = cur->next;
    }
    if (len <= 1)return head;
    else {
        int *a = (int *) malloc(sizeof(int) * len);
        cur = head;
        for (int i = 0; i < len; i++) {
            a[i] = cur->val;
            cur = cur->next;
        }
        qsort(a, len, sizeof(int), cmp);
        cur = head;
        for (int i = 0; i < len; i++) {
            cur->val = a[i];
            cur = cur->next;
        }
        free(a);
    }
    return head;
}

#endif //INC_147_SOLUTION_HPP
