#include <iostream>

struct ListNode {
    int val;
    struct ListNode *next;
};

#include "Solution.hpp"

int main() {
    ListNode *head = new ListNode({8, 0});
    ListNode *node = head;
    node->next = new ListNode({1, 0});
    node = node->next;
    node->next = new ListNode({2, 0});
    node = node->next;
    node->next = new ListNode({11, 0});
    node = node->next;
    node->next = new ListNode({3, 0});
    node = node->next;
    node->next = new ListNode({-1, 0});
    node = node->next;
    node->next = new ListNode({5, 0});
    node = node->next;
    auto ret = insertionSortList(head);
    while (ret) {
        std::cout << ret->val << " ";
        ret = ret->next;
    }
    return 0;
}
