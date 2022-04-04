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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head -> next == nullptr){
            return head;
        }
        
        int length = 0;
        ListNode *temp = head, *NodeK;
        while(temp != nullptr){
            ++length;
            if(length == k)
                NodeK = temp;
            temp = temp -> next;
        }
        
        length = length - k; 
        temp = head;
        while(length--){
            temp = temp -> next;
        }
        length = NodeK -> val;
        NodeK -> val = temp -> val;
        temp -> val = length;
        
        return head;
    }  
};