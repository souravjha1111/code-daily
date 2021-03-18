
        // sourav jha 01014802819
#include<stdio.h>
#include<stdlib.h>


struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *mergeTwoLists(struct ListNode *l1, struct ListNode *l2) {
    struct ListNode *head, *n;

    n = head = NULL;

    while (l1 != NULL && l2 != NULL) {
        if (l1->val <= l2->val) {
            if (n == NULL) {
                n = head = l1;
            } else {
                n = n->next = l1;
            }
            l1 = l1->next;
        } else {
            if (n == NULL) {
                n = head = l2;
            } else {
                n = n->next = l2;
            }
            l2 = l2->next;
        }
    }                
    if (l1 != NULL) {
        if (n == NULL) {
            head = l1;
        } else {
            n->next = l1;
        }
    } else {
        if (n == NULL) {
            head = l2;
        } else {
            n->next = l2;
        }
    }
    return head;
}