#include <iostream>

struct ListNode {
    int val;
    struct ListNode *next;
};

#include "Solution.hpp"

int main() {
    ListNode *head = new ListNode(), *node = head;
    node->val = 1;

    node->next = new ListNode();
    node = node->next;
    node->val = 2;

    node->next = new ListNode();
    node = node->next;
    node->val = 3;

    node->next = new ListNode();
    node = node->next;
    node->val = 4;

    node = swapPairs(head);
    while (node) {
        std::cout << node->val << std::endl;
        node = node->next;
    }
    return 0;
}
