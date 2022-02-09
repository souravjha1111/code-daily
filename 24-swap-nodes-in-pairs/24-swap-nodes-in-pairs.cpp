class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        auto a = head, b = head->next;
        a->next = b->next;
        b->next = a;
        a->next = swapPairs(a->next);
        return b;
    }
};
