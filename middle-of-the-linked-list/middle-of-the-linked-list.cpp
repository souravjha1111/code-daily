class Solution {
public:
    int count_nodes(ListNode* p){
    int result = 0;
    while(p){
        result++;
        p = p->next;
    }
    return result;
}
    ListNode* middleNode(ListNode* head) {
        int x = count_nodes(head)/2;
        while(x){
            x--;
            head = head->next;
        }
        return head;
        
    }
};