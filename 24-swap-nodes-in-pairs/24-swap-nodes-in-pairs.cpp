class Solution {
public:
 ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode*prev=head->next,*forw=head->next->next;
        head->next->next=head;
        head->next=swapPairs(forw);
        return prev;
    }

};