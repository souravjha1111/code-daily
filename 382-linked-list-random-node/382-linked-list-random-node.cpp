class Solution {
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head) {
        list = head;
        ListNode* ptr = head;
        while (ptr) {
            len++;
            ptr = ptr->next;
        }
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        int rand_index = rand()%len;
        ListNode* ptr = list;
        for (int i=0; i<rand_index; i++) {
            ptr = ptr->next;
        }
        return ptr->val;
    }

private:
    int len = 0;
    ListNode* list;
};//copied