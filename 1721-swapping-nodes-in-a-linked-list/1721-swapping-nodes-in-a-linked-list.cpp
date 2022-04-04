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
    int count(ListNode *p)
    {
        int l=0;
        while(p)
        {
            l++;
            p=p->next;
        }
        return l;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = head;
        ListNode* last = head;
        int count_ = count(head);
        for(int i=0;i<k-1;i++)
            first = first->next;
        for(int i=0;i<count_-k;i++)
            last = last->next;
        int temp = first->val;
        first->val = last->val;
        last->val = temp;
        return head;
    }
};