class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        if(!head){
            return head;
        }
        if(!head->next)
            return head;
        while(temp->next){
            if(temp->val == temp->next->val){
                temp->next = temp->next->next;
            }
            else 
                temp = temp->next;
        }
        return head;
    }
};