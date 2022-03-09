class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *res = new ListNode(0), *temp = res;
        
        while (head) {
            
            if (head->next && head->val == head->next->val) {
                while (head->next && head->val == head->next->val)
                    head = head->next;
            }
            
            else {
                res->next = head;
                res = head;
            }
            
            head = head->next;
        }
        
        res->next = NULL;
        return temp ->next;
    }
};
